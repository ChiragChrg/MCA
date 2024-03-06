# Use User-Defined modules as library using import statements
# and perform basic operations using custom library
# Library Filename: mylib.py

import mylib

while True:
    print("\n---|Select Operation|---")
    print("1. Area of Circle")
    print("2. Area of Rectangle")
    print("3. Exit")
    ch = int(input("\nEnter your Choice : "))
    
    if ch == 1:
        raduis = int(input("Enter the radius of circle : "))
        
        area = mylib.areaCircle(raduis)
        print("Area of Circle = ", area)
    elif ch == 2:
        length = int(input("Enter the Length of rectangle : "))
        width = int(input("Enter the Width of rectangle : "))
        
        area = mylib.areaRectangle(length,width)
        print("Area of Rectangle = ", area)
    elif ch == 3:
        print("Exiting Program... bye!!")
        break
    else:
        print("Invalid Choice!")