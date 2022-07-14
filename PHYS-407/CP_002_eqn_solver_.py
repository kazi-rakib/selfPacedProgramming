import time

class Solve:
	def __init__(self, a, b, c, d):
		self.a = a
		self.b = b
		self.c = c
		self.d = d
		self.count = 0
		print(self.__str__())
		
	def solveFor(self, x):
		
		self.count = self.count + 1
		
		eqn = (self.a*x*x*x + self.b*x*x + self.c*x + self.d)
		#print(eqn)
		return eqn
	
	def solve(self):
		
		L, R= -abs(self.a*self.d), abs(self.a*self.d)
		X = (L+R)/2
		# print(L, R)
		while abs(R-L) > 1e-15 :
			
			time.sleep(0.01)
			
			if self.solveFor(X) > 0.0 :
				# look in first half
				R = X
			else:
				# look in last half
				L = X
			
			print(self.count, end="\r")
			
			X = (L+R)/2
			
		print("\toperations performed to solve.")
		return X
	
	def __str__(self):
		
		# show the eqn
		eqn = 'f(x) = (' + str(self.a) + ')x^3 + (' + str(self.b) + ')x^2 + (' + str(self.c) + ')x + (' + str(self.d) + ')\n'
		
		return eqn
		
		def __repr__(self):
			eqn = 'f(x) = (' + str(self.a) + ')x^3 + (' + str(self.b) + ')x^2 + (' + str(self.c) + ')x + (' + str(self.d) + ')\n'
			
			return eqn
	
	
				
if __name__ == "__main__":
	
	s = Solve(1, 0, -2, -5)
	print('\nx = ', s.solve())
	
	
	# user input
	a = float(input("a="))
	b = float(input("b="))
	c = float(input("c="))
	d = float(input("d="))
	s2 = Solve(a, b, c, d)
	print("x = ", s2.solve())