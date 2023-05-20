#!/usr/bin/python3

nums = [1, 3, 9, 6, 4, 7, 8, 12]


odds = filter(lambda n: n % 2 == 0, nums)
print(list(odds))
