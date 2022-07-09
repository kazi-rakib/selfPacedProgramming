import time

a, b, c, d, count= 0, 0, 0, 0, 0

def solveFor(x):
	global count
	count = count + 1
	
	eqn = (a*x*x*x + b*x*x + c*x + d)
	#print(eqn)
	return eqn
	
def eqn(a1, b1, c1, d1):
	global a, b, c, d
	a = a1
	b=b1
	c=c1
	d=d1
	# show the eqn
	print('f(x) = (', a, ')x^3 + (', b, ')x^2 + (', c, ')x + (', d, ')\n')

def solve():
	global count
	count = 0
	L, R= -abs(a*d), abs(a*d)
	X = (L+R)/2
	# print(L, R)
	while abs(R-L) > 1e-15 :
		
		time.sleep(0.01)
		
		if solveFor(X) > 0.0 :
			# look in first half
			R = X
		else:
			# look in last half
			L = X
		
		print(count, end="\r")
		
		X = (L+R)/2
		
	print("\toperations performed to solve.")
	return X


				
if __name__ == "__main__":
	
	eqn(1, 0, -2, -5)
	print('\nx = ', solve())
	
	# user input
	a = float(input("a="))
	b = float(input("b="))
	c = float(input("c="))
	d = float(input("d="))
	eqn(a, b, c, d)
	print("x = ", solve())