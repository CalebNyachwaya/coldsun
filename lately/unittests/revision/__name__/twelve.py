def hello():
    print("Hi, I'm Caleb")

print("filename: ", __name__)

if __name__ == "__main__":
    print("You're running the program directily")

if __name__ == "twelve":
    print("You're running an imported script")
