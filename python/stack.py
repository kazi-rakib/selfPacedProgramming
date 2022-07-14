# Stack

class Stack:
	def __init__(self, size):
		self.__data__ = []
		self.__top__ = 0
		self.__size__ = size+1
		
	def push(self, value):
		if not (self.__top__ +1 == self.__size__):
			self.__data__.append(value)
			self.__top__ += 1
		else:
			print('stack is full!')

	def pop(self):
		if self.__top__ == 0:
			print("stack is empty!")
			return None
		else:
			self.__top__ = self.__top__ - 1
			return self.__data__[self.__top__]
	
	def __str__(self):
		return '\n' + str(type(s)) + '\ntop:  ' + str(self.__top__) + '\n' + str(self.__data__)


size = 5
s = Stack(size)

if __name__ == "__main__":
	for i in range(size+1):
		s.push(input(f'push {i}: '))
		
	for i in range(size+1):
		s.pop()

#print(s.pop())
print(s)

