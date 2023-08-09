import unittest
from perimeter import perimeter
class TestPerimeter(unittest.TestCase):
    # define test methods
    # all test methods should start with 'test'

    def test_perimeter(self):
        self.assertEqual(perimeter(50,10), 120)
        self.assertEqual(perimeter(10, 10), 40)
    def test_zero(self):
        self.assertRaises(ValueError, perimeter, 10, 0)
        self.assertRaises(ValueError, perimeter, 0, 0)
    def test_validinput(self):
        self.assertRaises(TypeError, perimeter, "jatelo",10)
