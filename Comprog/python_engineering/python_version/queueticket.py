import sys
from math import fabs

n = int(input())
ticket = []
times = []
qtime = []
count = 0
call = 0
calltime = 0

for i in range(n):
    inp = input().strip()
    
    if inp == "reset":
        first = int(input())
        ticket = [first]  # Reset the ticket list with the first ticket
        count = 0  # Reset count since the ticket list has been reset
        call = 0  # Reset call since ticket list is reset
    
    elif inp == "new":
        timeu = int(input())
        times.append(timeu)
        if count < len(ticket):
            print(f">> ticket {ticket[count]}")
            ticket.append(ticket[count] + 1)
            count += 1
        else:
            print("Error: No tickets to issue.")
    
    elif inp == "next":
        if call < len(ticket):
            print(f">> call {ticket[call]}")
            calltime = call
            call += 1
        else:
            print("Error: No more tickets to call.")
    
    elif inp == "order":
        now = int(input())
        if calltime < len(times):
            print(f">> qtime {ticket[calltime]} {int(fabs(times[calltime] - now))}")
            qtime.append(int(fabs(times[calltime] - now)))
        else:
            print("Error: No call to calculate qtime for.")
    
    elif inp == "avg_qtime":
        if qtime:
            ans = sum(qtime)
            avg = ans / len(qtime)
            print(f">> avg_qtime {round(avg, 2)}")
        else:
            print(">> avg_qtime 0.00")
