# selection sort algorithm
ara = [11, 4, 2, 9, 54, 35, 33, 11, 33, 33, 9]

def sort(ara):
	count = 0
	for i in range(len(ara)-1):
		min = i
		for j in range(i, len(ara)):
			if ara[min] > ara[j]:
				min = j
			count += 1
		if min != i:
			temp = ara[i]
			ara[i] = ara[min]
			ara[min] = temp
		print(i, j, '\n', ara)
	print(count)

print(ara)
sort(ara)
#print(sorted(ara))
print(ara)