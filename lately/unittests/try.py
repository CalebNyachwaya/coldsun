import unittest
import test_add

class TestAdd(unittest.TestCase):
  def test_add(self):
    self.assertEqual(test_add.add(1, 2), 3)
    self.assertEqual(test_add.add(5, 6), 11)

  def test_confirm(self):
    self.assertEqual(test_add.sub(4,2), 2)
    
if __name__ == "__main__":
  unittest.main()
