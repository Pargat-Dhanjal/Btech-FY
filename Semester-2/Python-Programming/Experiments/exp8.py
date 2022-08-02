from abc import ABC, abstractmethod

class Vehicle(ABC):
    @abstractmethod
    def speed(self,name,topSpeed):
        print("The Name is",name)
        print("The Speed is",topSpeed)
        print()

class TwoWheeler(Vehicle):
    def speed(self,name,topSpeed):
        super().speed(name,topSpeed)

class FourWheeler(Vehicle):
    def speed(self,name,topSpeed):
        super().speed(name,topSpeed)

obj1=TwoWheeler()
obj2=FourWheeler()

obj1.speed("BatMobile","330 km/hr")
obj2.speed("BatPod","160 km/hr")