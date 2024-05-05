def check_num(x):
    if x < 0:
        raise ValueError("Number must be a Positive Integer")

try:
    num = int(input('Enter a Number : '))
    check_num(num)
    
    print('Entered Number is : ', num)
except ValueError as e:
    print("Error : ", e)