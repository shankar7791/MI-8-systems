# Python prorgam to check prime number. 
num1 = int(input("Enter any number = "))

if num1 > 1:
    for each_item in range(2 , num1):
        if num1 % each_item == 0:
            print("The number is not a prime number.")
            break
        else:
            print("The number is a prime number.")
else:
    print("The number is not a prime number.")