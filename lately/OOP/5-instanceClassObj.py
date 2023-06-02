"""
Instance methods and class methods
"""
class Student:
	def __init__(self, name):
		self.jina = name	
	def change_name(self, name): #bound to instance
		self.jina = name
	def maintain(self):
		return self.jina

	@classmethod #bound to class
	def view_class(cls):
		print("The value of cls: {}".format(cls)) 

std1 = Student("Fern")
print(std1.jina)
Student.view_class()
