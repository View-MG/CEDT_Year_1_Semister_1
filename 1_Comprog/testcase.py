def write_testcase(filename, testcase):
    with open(filename, "w") as f:
        for line in testcase:
            f.writelines(line)
            f.writelines("\n")

def wait(duration, valid, done, output, M, N):
    testcase = []
    for i in range(duration):
        testcase.append(M + " " + N + " " + "0 0 0 0 0 0 " + valid + " " + done + " " + output)
        testcase.append(M + " " + N + " " + "0 0 0 0 0 1 " + valid + " " + done + " " + output)
    return testcase

def help():
    print("help : display help")
    print("wait(duration,valid,done,output): wait for duration cycles, valid, done, output are the values for the signals")
    print("reset(duration): reset the circuit, duration is the number of cycles to wait after reset")
    print("load([program]): load the program, program is a list of program instructions (binary format)")
    print("start(duration,M,N): start the circuit, duration is the number of cycles to wait after start, M and N are the input values")
    print("result([result]): get the result, result is a list of results")
    print("exit: exit the program")

def main():
    print("Enter file name:")
    filename = input()
    testcase = ["M N progIN reset progLoad start result clk valid done output","0 0 0 0 0 0 0 0 x x x", "0 0 0 0 0 0 0 1 x x x"]
    while True:
        operation = input("Enter operation: ")
        if operation == "exit":
            break
        elif operation == "reset":
            duration = input("Enter duration: ")
            testcase.append("0 0 0 1 0 0 0 0 x x x")
            testcase.append("0 0 0 1 0 0 0 1 x x x")
            testcase += wait(int(duration), "x", "x", "x","0","0")
            testcase.append("0 0 0 0 0 0 0 0 0 0 x")
            testcase.append("0 0 0 0 0 0 0 1 0 0 x")
        elif operation == "load":
            operation = []
            while True:
                op = input("Enter instruction: ")
                if op == "exit":
                    break
                operation.append(op)
            for op in operation:
                testcase.append("0 0 " + str(int(op,2)) + " 0 1 0 0 0 0 0 x")
                testcase.append("0 0 " + str(int(op,2)) + " 0 1 0 0 1 0 0 x")
        elif operation == "start":
            duration = input("Enter duration: ")
            M = input("Enter M: ")
            N = input("Enter N: ")
            testcase.append("0 0 0 0 0 1 0 0 0 0 x")
            testcase.append("0 0 0 0 0 1 0 1 0 0 x")
            testcase += wait(int(duration), "x", "x", "x", M, N)
        elif operation == "result":
            last = ""
            for i in range(16):
                result = input("Enter " + str(i) +  " result: ")
                if i == 0:
                    testcase.append("0 0 0 0 0 0 1 0 1 0 x")
                    testcase.append("0 0 0 0 0 0 1 1 1 0 " + result)
                elif i == 15:
                    testcase.append("0 0 0 0 0 0 0 0 1 0 " + last)
                    testcase.append("0 0 0 0 0 0 0 1 1 0 " + result)
                    testcase.append("0 0 0 0 0 0 0 0 1 0 " + result)
                    testcase.append("0 0 0 0 0 0 0 1 1 1 x")
                else:
                    testcase.append("0 0 0 0 0 0 0 0 1 0 " + last)
                    testcase.append("0 0 0 0 0 0 0 1 1 0 " + result)
                last = result
        elif operation == "wait":
            duration = input("Enter duration: ")
            valid = input("Enter valid: ")
            done = input("Enter done: ")
            output = input("Enter output: ")
            testcase += wait(int(duration), valid, done, output, "0", "0")
        elif operation == "help":
            help()
        else:
            print("Invalid operation")
    write_testcase(filename, testcase)

if __name__ == "__main__":
    main()