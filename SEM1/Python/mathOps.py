# Program to perform basic math ops uisng Math library

import math
while True:
    num = float(input("\nEnter a Number : "))

    print("\n---|Select Operation|---")
    print("1. Square Root")
    print("2. Ceil")
    print("3. Floor")
    print("4. Factorial")
    print("5. Area of Circle")
    print("6. Exit")
    ch = int(input("\nEnter your Choice : "))
    
    if ch == 1:
        print("Square root of ", num, " = ", math.sqrt(num))
    elif ch == 2:
        print("Ceil of ", num, " = ", math.ceil(num))
    elif ch == 3:
        print("Floor of ", num, " = ", math.floor(num))
    elif ch == 4:
        print("Factorial of ", num, " = ", math.factorial(num))
    elif ch == 5:
        area = math.pi * math.pow(num,2)
        print("Area of Circle with radius ", num, " = ", area)
    elif ch == 6:
        print("Exiting Program... bye!!")
        break
    else:
        print("Invalid Choice!")