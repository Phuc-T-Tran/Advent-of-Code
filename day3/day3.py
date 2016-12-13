file = open("input.txt")

count = 0
for line in file:
	line = line.split()           # line -> list of numbers (as strings)
	line = [int(x) for x in line] # convert string ints to ints
	line.sort()

	if(line[0] + line[1] > line[2]):
		count += 1
print(count)

file.close()