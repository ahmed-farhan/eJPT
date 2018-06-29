user_input = input("Enter your age here: ")
print("Nice to meet you, " + user_input + "!")

#using the shorthand , notation will automatically add white spaces between strings
print("Nice to meet you,", user_input, "!")

#to retrieve and store user input as an integer, cast the user input as an int
age = int(input("How old are you? "))
print("In one year you will be", age+1, "years old")
