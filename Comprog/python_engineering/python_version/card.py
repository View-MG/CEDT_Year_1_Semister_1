value = {'A': 1, '2': 2, '3': 3, '4': 4, '5': 5, '6': 6, '7': 7, '8': 8, '9': 9, 'T': 10, 'J': 11, 'Q': 12, 'K': 13}
card = {'C': 1, 'D': 2, 'H': 3, 'S': 4}
line = input().strip()
for i in range(2, len(line), 2):
    n = 0
    if line[i] != line[i - 2]:
        n = value[line[i - 2]] - value[line[i]]
    elif line[i] == line[i - 2]:
        n = card[line[i - 1]] - card[line[i + 1]]
    
    if n > 0:
        print("+", end="")
    print(n, end="")