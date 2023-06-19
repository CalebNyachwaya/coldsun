#!/usr/bin/python3


class Circle:
    def __init__(self, radius):
        self.radius = radius

    @property
    def area(self):
        return 3.14 * self.radius ** 2

    @area.setter
    def area(self, value):
        self.radius = (value / 3.14) ** 0.5

circle1 = Circle(14)
print(circle1.radius)
print(circle1.area)

circle1.area = 615.44 # value = 14
print(circle1.radius)
