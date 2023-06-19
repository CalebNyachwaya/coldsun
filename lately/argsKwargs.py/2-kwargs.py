#!/usr/bin/python
# 2-kwargs.py

def EmployeeID(**kwargs):
	for name, sake in kwargs.items():
		print("My name is {}. My employee code is {}".format(name, sake))

EmployeeID(caleb=17, joan=29, derrick=34, tray=50, gib=56, ken=47)
