def add(a,b):
	return a+b
def sub(a,b):
	return a-b
def mult(a,b):
	return a*b
def divide(a,b):
	return a/b
#calculator
i=int(input("enter value of a"))
j=int(input("enter value of b"))
o=input("what do you want to do +,-,*,/")
if(o=="+"):
	r=add(i,j)
if(o=="-"):
	r=sub(i,j)
if(o=="*"):
	r=mult(i,j)
if(o=="/"):
	r=divide(i,j)
print(r)
