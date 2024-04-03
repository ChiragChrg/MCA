# Program to find Factorial, Fibonacci series & Even/Odd Checker

def factorial(N):
    total = 1
    for i in range(N):
        total *= i+1
        
    return total

def fibonacci(N):
    series = [0,1]
    i=2
    while(i<N):
        sum = series[-1] + series[-2]
        series.append(sum)
        i += 1
        
    return series

while True:
    print("\n---|Select Operation|---")
    print("1. Factorial")
    print("2. Fibonacci series")
    print("3. Even/Odd Checker")
    print("4. Exit")
    ch = int(input("\nEnter your Choice : "))
    
    if ch == 1:
        num = int(input("Enter the number : "))
        print("Factorial of ", num, " = ", factorial(num))
    elif ch == 2:
        num = int(input("Enter the number : "))
        print("Fibonacci series of range ", num, " = ", fibonacci(num))
    elif ch == 3:
        num = int(input("Enter the number : "))
        if num % 2 == 0:
            print(num, " is an Even Number")
        else:
            print(num, " is an Odd Number")
    elif ch == 4:
        print("Exiting Program... bye!!")
        break
    else:
        print("Invalid Choice!")