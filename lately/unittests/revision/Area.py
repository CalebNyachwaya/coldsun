from math import pi




def area(r):
	return (pi*(r**2))

r = [0, 70]
message = 'Area of the circle with radius r = {} is {}'
for i in r:
	print(message.format(i, area(i)))
