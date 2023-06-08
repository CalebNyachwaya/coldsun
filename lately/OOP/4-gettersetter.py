class Student:
	def __init__(self, name):
		self.jina = name	
	def change_name(self, name):
		self.jina = name
	def maintain(self):
		return self.jina
std1 = Student("Fern")
print(std1.jina)
std1.maintain()
print(std1.jina)
std1.change_name("Dua")
print(std1.jina)
