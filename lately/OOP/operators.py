class Student:
    def __init__(self, fname, lname):
        self.fname = fname
        self.lname = lname
        self.fullname = self.fname + ' ' + self.lname

    def email(self):
        return '{}.{}@alxafrica.com'.format(self.fname, self.lname)

s1 = Student("Tony", "Stark")
print(s1.fullname)
print(s1.email())
s1.first = "caleb"
print(s1.fullname)
print(s1.email())
