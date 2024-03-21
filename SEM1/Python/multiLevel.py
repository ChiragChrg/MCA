# Create class Hierarchy with multi levels of inheritance such as Vehicles.
# Car and MotorCycles are Vehicle's children. Implement basic functionality.

class Car:
    def showCar(self):
        print("This is a Car")

class MotorCycle:
    def showBike(self):
        print("This is a MotorCycle")
        
class Vehicle (Car, MotorCycle):
    def showVehicle(self):
        print("Cars and MotorCycles are Vehicles")

class Hierarchy (Vehicle):
    def display(self):
        print("Class Hierarchy inherits Vehicles")

h = Hierarchy()
h.showCar()
h.showBike()
h.showVehicle()
h.display()