class CustomError(Exception):
    pass

def divide(x,y):
    if y == 0:
        raise CustomError("Cannot divide by Zero!")
    else:
        return x / y

try:
    num1 = int(input("Enter 1st number : "))
    num2 = int(input("Enter 2nd number : "))
    
    result = divide(num1, num2)
    print(f"Result of {num1} / {num2} = {result}")
except CustomError as e:
    print('Error: ', e)