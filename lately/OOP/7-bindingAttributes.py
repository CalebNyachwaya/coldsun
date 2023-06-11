class Book:
    pass
Book.genre = "Fiction"  # binding genre attribute to class

novel = Book()
storybook = Book()

novel.title = "Dusk"    # binding attribute to object
storybook.pages = 120
print(novel.genre) #attribute inherited by dot notation
print(storybook.genre)
print(novel.title) 
print(storybook.pages)
