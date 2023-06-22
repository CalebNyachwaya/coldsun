#!/usr/bin/python3
# RegistraionForm.py


class Form:
    def __init__(self, name, email, password, confirm_password):
        self.name = name
        self.email = email
        self.password = password
        self.confirm_password = confirm_password

    def validate(self):
        if self.name and self.email and self.password and self.confirm_password:
            if self.password != self.confirm_password:
                print("The passwords do not match")
            if "@" not in self.email or ".com" not in self.email:
                print("Enter a valid email")
        else:
            print("Please fill in the empty fields")     


class Agent(Form):
    def __init__(self, name, email, password, confirm_password, auuid):
        self.auuid = auuid
        super().__init__(name, email, password, confirm_password)


class Sstaff(Form):
    def __init__(self, name, email, password, confirm_password, department):
        self.department = department
        super().__init__(name, email, password, confirm_password)

Agent1 = Agent("Irene", "irene@gmaicom", "dadada", "dadada", 1732)
Agent1.validate()
