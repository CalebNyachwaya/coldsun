#!/usr/bin/python
# kwargs.py

def limitless(**kwargs):
	print(kwargs)	# kwargs is a dictionary where keyworded items are collected
	print(kwargs["one"]) 
	print(kwargs["two"])
	print(kwargs["three"])

limitless(one = "moja", two = "mbili", three = "tatu", four = "nne")
