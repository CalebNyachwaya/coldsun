"""
Instance methods and class methods
"""
class Student:
    gender = "male"
    def __init__(self, name):
        self.jina = name	
    def change_name(self, name): #bound to instance
        self.jina = name
    def maintain(self):
        return self.jina

print(Student.__dict__)
