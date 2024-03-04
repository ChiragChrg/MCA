# Program to perform basic Arithmetic operations

while(True):
    num1 = int(input("\nEnter 1st Number : "))
    num2 = int(input("Enter 2nd Number : "))
    
    print("\n---|Select Operation|---")
    print("1. Addition")
    print("2. Subtraction")
    print("3. Multiplication")
    print("4. Division")
    print("5. Exit")
    ch = int(input("\nEnter your Choice : "))
    
    if ch == 1:
        print(num1," + ",num2," = ",num1 + num2)
    elif ch == 2:
        print(num1," - ",num2," = ",num1 - num2)
    elif ch == 3:
        print(num1," * ",num2," = ",num1 * num2)
    elif ch == 4:
        print(num1," / ",num2," = ",num1 / num2)
    elif ch == 5:
        print("Exiting Program... bye!")
        break
    else:
        print("\n--**--|Invalid Choice|--**--")