# Create class Hierarchy where each Child calls a Constructor of its parent using
# Super key. Demonstrate how each attribute of class are inheritted and accessed.

class Person:
    def __init__(self, fname, lname):
        self.fname = fname
        self.lname = lname
        
    def printName(self):
        print(self.fname, self.lname)

class Student(Person):
    def __init__(self, fname, lname, year):
        super().__init__(fname, lname)
        self.graduationYear = year

    def welcome(self):
        print("Welcome", self.fname, self.lname,"to class of",self.graduationYear)
        
    def printName(self):
        super().printName()

class Hierarchy (Student):
    def __init__(self, fname, lname, year):
        super().__init__(fname, lname, year)
    
x = Hierarchy("John", "Doe", 2024)
x.printName()
x.welcome()