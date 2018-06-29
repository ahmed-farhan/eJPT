def a(x):
    print("Sum of", x, "+", x)
    return x + x
def b(x):
    print("Product of", x, "*", x)
    return x*x

function_switch = {
    1: a,
    2: b,
}

user = int(input("""Select an operation:
1) sum
2) multiplication
"""))

if user in function_switch:
    x = int(input("Enter a numbner: "))
    result = function_switch[user](x)
    print("the result is", result)
else:
    print("Wrong input")
