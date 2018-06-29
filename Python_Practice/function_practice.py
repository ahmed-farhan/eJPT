#defines the function 'calculation'. Every function should have a function
#documentation, as indicated with the tripe double quotes
#function must be defined before they are called
def calculation(x, y, z):
    """Returns the sum of x and y, multiplied by z """
    return ((x+y)*z)


#Calls the function 'calculation' with the listed parameters and stores
#the return value in variable x. Then prints x out to the user
one  = int(input("Enter first number: "))
two  = int(input("Enter second number: "))
three  = int(input("Enter third number: "))
x = calculation(one,two,three)
print("The value of", one, "plus", two, "multiplied by", three, "is:", x)



#the following lines show how to create the documentation for a function
print("calculation documentation: ", calculation.__doc__)


