# your code goes here
A = None
B = True
C = False
D = ""

while B:
	try:
		A = input()
		for a in A:
			if ( a is "\"") and ( C is False):
				C = True
				D = D + "`"+ "`"
			elif ( a is "\"") and ( C is True):
				C = False
				D = D + "\'" + "\'"
			else:
				D = D + a
		D = D + "\n"
	except:
		A = None
		B = False
print(D)
