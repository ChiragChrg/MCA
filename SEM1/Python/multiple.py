# Demonstrate Multiple Level inheritance using 4 classes

class Sum:
    def add(self, a, b):
        return a + b
    
class Difference:
    def sub(self, a, b):
        return a - b
    
class Product:
    def mul(self, a, b):
        return a * b
    
class Quotient:
    def div(self, a, b):
        return a / b

class Derived (Sum, Difference, Product, Quotient):
    pass

calc = Derived()
print(f"6 + 2 = {calc.add(6,2)}")
print(f"6 - 2 = {calc.sub(6,2)}")
print(f"6 * 2 = {calc.mul(6,2)}")
print(f"6 / 2 = {calc.div(6,2)}")