file = open("input.txt")

count = 0
while (1):
	# Read three lines at a time into a list
	lines = [file.readline().split(), file.readline().split(), file.readline().split()]
	if (not lines[0] or not lines[1] or not lines[2]):
		break # Exit when file is completely read 

	# Iterate over each column
	for i in range(3):
		values = [int(lines[0][i]), int(lines[1][i]), int(lines[2][i])]
		values.sort()

		# Check if the two smallest sides add up to the larger side
		if (values[0] + values[1] > values[2]):
			count += 1
print(count)

file.close()