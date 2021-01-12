# Python program to add two numbers:- 
num1 = int(input("Enter the first number = "))
num2 = int(input("Enter the second number = "))
total = num1 + num2 
print(total)

# Python program to find the square root:
num3 = int(input("Enter the number for the square root = "))
answer = num3 ** 0.5
print(f"The square root of {num3} = {answer}")

# Python program to find the calculate the area of a triangle:
height = int(input("Enter the height of the triangle = "))
breadth = int(input("Enter the breadth of the triangle = "))
area = 0.5 * height * breadth
print(area)

# Python program to solve a quadratic equation:
print("Quadratic equation is of the form == ax^2 + bx + c")
val1 = int(input("Enter value of a = "))
val2 = int(input("Enter value of b = "))
val3 = int(input("Enter value of c = "))
ans1 = (-val2 + ((val2**2 - 4*val1*val3))**0.5) / 2*val1
ans2 = (-val2 - ((val2**2 - 4*val1*val3))**0.5) / 2*val1
print(f"The value of x are = {ans1} and {ans2}")

# Python program to swap two variables:
num5 = int(input("Enter the first number = "))
num6 = int(input("Enter the second number = "))
num7 = num5
num8 = num6  
print(f"Your first number is = {num7} and your second number is = {num8}")

# Python program to create random number:
import random 
num9 = int(input("Enter the lowest range = "))
num10 = int(input("Enter the highest range = "))
final = random.randrange(num9 , num10)
print(f"Your number is {final}")

# Python program to convert km to mts:
num11 = float(input("Enter a number in kms = "))
num12 = num11 * 0.62
print(num12)

# Python program to convert celsius to fahreanheit:
num13 = float(input("Enter the temperature in celsius = "))
num14 = (num13 * 4.5) + 32
print(f"Your temperature in fahrenheit is = {num14}")