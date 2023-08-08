import unittest
import now

class Dog(now.Animal):
  def __init__(self, name):
    super().__init__(name)

  def speak(self):
    print("Woof! I am {}".format(self.name))


class TestDog(unittest.TestCase):
  def test_show(self):
    dog1 = Dog("essy")
    self.assertEqual(dog1.speak(), "Woof! I am essy")


if __name__ == "__main__":
  unittest.main()
