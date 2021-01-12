# Python program to solve a quadratic equation:
print("Quadratic equation is of the form == ax^2 + bx + c")
val1 = int(input("Enter value of a = "))
val2 = int(input("Enter value of b = "))
val3 = int(input("Enter value of c = "))
ans1 = (-val2 + ((val2**2 - 4*val1*val3))**0.5) / 2*val1
ans2 = (-val2 - ((val2**2 - 4*val1*val3))**0.5) / 2*val1
print(f"The value of x are = {ans1} and {ans2}")
