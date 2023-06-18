#!/usr/bin/python
# 1-basics.py
""" *args definition """

args = (10, 20, "three", 50)
def testt(arg1, arg2, arg3, arg4):
	print(arg1)
	print(arg2)
	print(arg3)
	print(arg4)
testt(*args)


def testt2(*numbers):
	print(numbers)

testt2(10,20,30,40,30,40)
