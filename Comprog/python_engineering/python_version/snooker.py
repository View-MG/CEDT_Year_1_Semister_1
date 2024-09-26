ball = {'X': 0, 'R': 1, 'Y': 2, 'G': 3, 'W': 4, 'B': 5, 'P': 6, 'K': 7}
player = {1: 0, 2: 0}
    
while True:
    line = input()
    if line[1] == 'K':
        player[int(line[0])] += ball[line[1]]
        break
    if line[1] == 'R':
        player[int(line[0])] += (1 + ball[line[2]])
    else:
        player[int(line[0])] += ball[line[1]]
print(player[1], player[2])
if player[1] > player[2]:
    print("Player 1 wins")
elif player[1] < player[2]:
    print("Player 2 wins")
else:
    print("Tie")