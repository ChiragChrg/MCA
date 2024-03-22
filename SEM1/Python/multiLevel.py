# Create class Hierarchy with multi levels of inheritance such as Vehicles.
# Car and MotorCycles are Vehicle's children. Implement basic functionality.

class Vehicle:
    def showVehicle(self):
        print("This is Vehicle")
        
class Car(Vehicle):
    def showCar(self):
        print("This is a Car")

class Model(Car):
    def showModel(self):
        print("This Car is a Ferrari")
        

class Hierarchy(Model):
    def display(self):
        print("I have a Ferrari Car")

h = Hierarchy()
h.showVehicle()
h.showCar()
h.showModel()
h.display()