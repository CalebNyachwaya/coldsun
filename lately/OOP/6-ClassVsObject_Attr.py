#!/usr/bin/python3
""" Difference between class attr and object attr """

class Student:
    population = 2000

    def __init__(self, name, level):
        self.name = name
        self.level = level

    def mimi(self, name):
        print("My name is {}".format(self.name))

    def about(self, level):
        print("I am in level {}".format(about.level))

stud1 = Student("Fern", 6)
#stud1.mimi("Paige")

stud2 = Student("Dua", 7)
print(stud2.name)
print(stud1.name)

print("==========")
print(stud1.population)
print(stud2.population)
print(Student.population)
