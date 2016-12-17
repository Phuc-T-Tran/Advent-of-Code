import math

keypad = [[0,  0 ,  1 ,  0 , 0],
          [0,  2 ,  3 ,  4 , 0],
          [5,  6 ,  7 ,  8 , 9],
          [0, 'A', 'B', 'C', 0],
          [0,  0 , 'D',  0 , 0]]
r, c = 2, 2

file = open("input.txt")
for line in file:
	for char in line:
		if (char == 'U' and r - 1 >= 0 and keypad[r - 1][c] != 0):
			r -= 1
		elif (char == 'D' and r + 1 <= len(keypad) - 1 and keypad[r + 1][c] != 0):
			r += 1
		elif (char == 'L' and c - 1 >= 0 and keypad[r][c - 1] != 0):
			c -= 1
		elif (char == 'R' and c + 1 <= len(keypad) - 1 and keypad[r][c + 1] != 0):
			c += 1
	print(keypad[r][c], end="")
file.close()