# Python program to print all the prime numbers in an interval. 
lower_limit = int(input("Enter the lower range = "))
higher_limit = int(input("Enter the higher range = "))


for each_item in range(lower_limit , higher_limit + 1):
    if each_item > 1:
        for num in range(2 , each_item):
            if each_item % num == 0:
                break
        else:
            print(each_item)