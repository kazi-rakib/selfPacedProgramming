# insertion sort algo

data = [11, 4, 2, 9, 54, 35, 33, 11, 33, 9, 33]   # len=11

def sort(ara):
	for i in range(1, len(ara)):
		print(i)
		item = ara[i]
		j = i -1
		while j >= 0 and ara[j] > item :
			#print(i, j)
			ara[j+1] = ara[j]
			j -= 1
		ara[j+1] = item
		print(ara)


print(data)
sort(data)
print(data)