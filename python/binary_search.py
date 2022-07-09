def bs(ara, x):
	left, right = 0, len(ara)-1
	
	while left <= right :
		
		mid = left + (right-left)//2
		
		if ara[mid] == x:
			return mid
			
		if ara[mid] < x :
			left = mid+1
		else:
			right = mid -1
			
	return -mid-1
	
if __name__ == "__main__":
	data = [4, 6, 8, 10, 11, 16, 18, 22]
	print(data)
	
	print(bs(data, 4), 0)
	
	print(bs(data, 5), -1)
	
	print(bs(data, 6), 1)
	
	print(bs(data, 8), 2)
	
	print(bs(data, 10), 3)
	
	print(bs(data, 11), 4)
	
	print(bs(data, 16), 5)
	
	print(bs(data, 18), 6)
	
	print(bs(data, 33), -1)
	