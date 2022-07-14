# bubble sort algo

ara = [11, 4, 2, 9, 54, 35, 33, 11, 33, 9, 33]   # len=11

def sort(ara):
	count=0
	for i in range(len(ara), 0, -1):
		print(i)
		for j in range(1, i):
			count += 1
			print(i, j)
			if ara[j-1] > ara[j]:
				temp = ara[j-1]
				ara[j-1] = ara[j]
				ara[j] = temp
			print(ara)
	print(count)
			
def sort2(data):
	count=0
	for i in range(len(data)):
		#print(i)
		for j in range(len(data)-i-1):
		#for j in range(i): # won't work'
			count += 1
			print(i, j)
			if data[j] > data[j+1]:
				temp = data[j+1]
				data[j+1] = data[j]
				data[j] = temp
			print(data)
	print(count)
			
print(ara)
sort2(ara)
print(ara)