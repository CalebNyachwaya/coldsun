#!/usr/bin/python3
# 2-methodOveride.py

"""Using super() to call parent class attributes"""


class Person:
    def __init__(self, name):
        self.name = name

    def intro(self):
        print("My name is {}".format(self.name))


class Student(Person):
    def __init__(self, name, cohort):
        super().__init__(name)
        self.cohort = cohort

    def intro(self):
        print("My name is {} and I'm from cohort {}".format(self.name, self.cohort))

person1 = Person("Admin")
person1.intro()
student1 = Student("Caleb", 12)
student1.intro()
