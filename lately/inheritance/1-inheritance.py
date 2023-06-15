#!/usr/bin/python
# 10-inheritance.py

class User:
	def __init__(self, name, email): #constructore -> innitializes attrr
		self.name = name
		self.email = email

	def display(self):
		print("Name: {}".format(self.name))



class Admin(User):
	def __init__(self, name, email, role):
		self.role = role
		User.__init__(self, name, email) 

	def display(self):
		User.display(self)
		print("My name is {}".format(self.name))


Admin1 = Admin("Caleb", "cal@gmail.com", "IT support")
user1 = User("Rose", "rose@gmail.com")

print("Hi, I'm {}".format(Admin1.name))
user1.display()
