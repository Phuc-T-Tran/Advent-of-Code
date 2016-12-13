file = open("input.txt")

count = 0
for line in file:
	line = [int(x) for x in line.split()] # convert string to list of ints
	line.sort()                           # and sort in increasing order
	if(line[0] + line[1] > line[2]):      # valid triangle if sum of smaller sides > bigger side
		count += 1
print(count)

file.close()