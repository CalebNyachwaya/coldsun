import math

def perimeter(l, w):
    if l == 0 or  w == 0:
        raise ValueError("The value should be more than 0")
#    if not isinstance(l, int):
 #       raise TypeError("Invalid input")
    return 2 * (l + w)
