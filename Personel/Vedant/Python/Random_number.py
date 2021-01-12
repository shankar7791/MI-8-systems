# Python program to create random number:
import random 
num9 = int(input("Enter the lowest range = "))
num10 = int(input("Enter the highest range = "))
final = random.randrange(num9 , num10)
print(f"Your number is {final}")
