n = int(input())
arr = [input().split() for _ in range(n)]
s = input()

if s == "90":
    for i in range(n-1, -1, -1):
        for j in range(n):
            print(arr[j][i], end="")
        print()

if s == "180":
    for i in range(n-1, -1, -1):
        for j in range(n-1, -1, -1):
            print(arr[j][i], end="")
        print()
