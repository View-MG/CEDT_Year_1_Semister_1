import math

def is_leap_year(year):
    return (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0)

MonthNormal = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
MonthLeap = [31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]

d1, m1, y1, d2, m2, y2 = map(int, input().split())

y1 -= 543
y2 -= 543

checkLeap1 = is_leap_year(y1)
checkLeap2 = is_leap_year(y2)

rday = d1
if m1 > 1: rday += MonthNormal[0]
if m1 > 2: rday += MonthLeap[1] if checkLeap1 else MonthNormal[1]
if m1 > 3: rday += MonthNormal[2]
if m1 > 4: rday += MonthNormal[3]
if m1 > 5: rday += MonthNormal[4]
if m1 > 6: rday += MonthNormal[5]
if m1 > 7: rday += MonthNormal[6]
if m1 > 8: rday += MonthNormal[7]
if m1 > 9: rday += MonthNormal[8]
if m1 > 10: rday += MonthNormal[9]
if m1 > 11: rday += MonthNormal[10]
rday = (366 if checkLeap1 else 365) - rday

bday = d2
if m2 > 1: bday += MonthNormal[0]
if m2 > 2: bday += MonthLeap[1] if checkLeap2 else MonthNormal[1]
if m2 > 3: bday += MonthNormal[2]
if m2 > 4: bday += MonthNormal[3]
if m2 > 5: bday += MonthNormal[4]
if m2 > 6: bday += MonthNormal[5]
if m2 > 7: bday += MonthNormal[6]
if m2 > 8: bday += MonthNormal[7]
if m2 > 9: bday += MonthNormal[8]
if m2 > 10: bday += MonthNormal[9]
if m2 > 11: bday += MonthNormal[10]

aday = 0
if y2 > y1:
    aday = (y2 - y1 - 1) * 365

t = rday + bday + aday
sine_23 = round(math.sin(2 * math.pi * t / 23) * 100.0) / 100.0
sine_28 = round(math.sin(2 * math.pi * t / 28) * 100.0) / 100.0
sine_33 = round(math.sin(2 * math.pi * t / 33) * 100.0) / 100.0

if(sine_33 == 0) :
    print(f"{t} {sine_23:.2f} {sine_28:.2f} -{sine_33:.2f}")
else :
    print(f"{t} {sine_23:.2f} {sine_28:.2f} {sine_33:.2f}")