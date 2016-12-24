# Initialize the keypad and starting position
keypad = [[1, 2, 3],
          [4, 5, 6],
          [7, 8, 9]]
r, c = 1, 1

file = open("input.txt")
for line in file:
	# Update current position based on character read
	for char in line:
		if (char == 'U'):
			r = max(0, r - 1)
		elif (char == 'D'):
			r = min(2, r + 1)
		elif (char == 'L'):
			c = max(0, c - 1)
		elif (char == 'R'):
			c = min(2, c + 1)

	# Print the new position after reading the current line
	print(keypad[r][c])
file.close()