# Python program to check if a number is positive , neagtive or 0. 
num1 = int(input("Enter a positive , negative or 0 = "))

if num1 > 0:
    print(f"{num1} is a positive number")
elif num1 < 0:
    print(f"{num1} is a negative number")
else:
    print("The number you entered is 0.")
