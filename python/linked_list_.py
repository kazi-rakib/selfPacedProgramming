# Linked list

class Node:
	def __init__(self, item, nextLink):
		self.data = item
		self.next = nextLink
		
	
	def __str__(self):
		return str(self.data) + '\t' + str(self.next)
	
	
if __name__ == "__main__":
	
	print(Node)

