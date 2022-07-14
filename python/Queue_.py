# Queue

class Queue:
	def __init__(self, size):
		self.__size__ = size
		self.__q__ = list(item for item in range(size+1))
		self.__head__=0
		self.__tail__=0
		
	def enQ(self, value):
		if (self.__tail__ + 1) % (self.__size__+1) == self.__head__:
			print("Queue is full!")
			return
		
		self.__q__[self.__tail__] = value
		self.__tail__ = (self.__tail__ + 1) % (self.__size__+1)
		
		
	def deQ(self):
		if self.__head__ == self.__tail__ :
			print("Queue is empty!")
			return None
		
		item = self.__q__[self.__head__]
		self.__head__ = (self.__head__+1) % (self.__size__ + 1)
		
		return item
		
	def content(self):
		if self.__head__ > self.__tail__ :
			length = (self.__size__+1) + self.__tail__ - self.__head__
		else:
			length = self.__tail__ - self.__head__
			
		return length

		
	# q state
	def __str__(self):
		i = self.__head__
		j = self.__tail__
		items = []
		
		while i != j :
			items.append(self.__q__[i])
			i = (i+1) % (self.__size__ +1)
		
		return str(self.content()) + ' items: ' + str(items)
		



if __name__ == "__main__":
	q = Queue(9)
	for i in range(6*3):
		#q.enQ(input(f'{i} : '))
		print(q.__head__, q.__tail__)
		q.enQ(6-i)
		
	print(q)
	
	for i in range(3):
		q.deQ()
		print(q.__head__, q.__tail__)
	
	print(q)
		
	for i in range(6*3):
		#q.enQ(input(f'{i} : '))
		print(q.__head__, q.__tail__)
		q.enQ(6-i)
		
	print(q)
		
	for i in range(13):
		q.deQ()
		print(q.__head__, q.__tail__)
		
	print(q)
	
	
