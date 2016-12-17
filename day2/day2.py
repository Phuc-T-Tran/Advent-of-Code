keypad = [[1, 2, 3],
          [4, 5, 6],
          [7, 8, 9]]
r, c = 1, 1

file = open("input.txt")
for line in file:
	for char in line:
		print(char)
		if (char == 'U')
			r = max(0, r - 1)
	# 	else if (char == 'D')
	# 		r = min(2, r + 1)
	# 	else if (char == 'L')
	# 		c = max(0, c - 1)
	# 	else if (char == 'R')
	# 		c = min(2, c + 1)
	print(keypad[r][c])
file.close()