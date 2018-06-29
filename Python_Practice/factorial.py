user_value = int(input("Enter a number: "))
res = 1
if user_value == 0:
    pass
else:
    while user_value != 0:

        #multiple res with user_value
        #and store the result into res
        res *= user_value

        #decrement user_value by 1
        user_value -=1

print("Result is: ", res)
