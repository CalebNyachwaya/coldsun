from math import pi
import unittest
from Area import area

class TestArea(unittest.TestCase):
	def test_area(self):
		# testing for values greater than 0
		self.assertAlmostEqual(area(1), pi)

if __name__ == '__main__':
	unittest.main()

