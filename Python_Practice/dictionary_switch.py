dummy_switch = {
    1: "You have chosen 1",
    2: "You have chosen 2",
    0: "You have chosen 0",
}

user = int(input("Selec an option (0/1/2): "))

if user in dummy_switch:
    print(dummy_switch[user])
else:
    print("Invalid selection")
