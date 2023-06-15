class Phone:

    def __init__(self, brand):
        self.brand = brand
edgePro = Phone("Samsung")
print(edgePro.brand)

name = getattr(edgePro, "brand")    # getattr retrieves the value of the attribute
print(name)

year = getattr(edgePro, "year", "The year does not exist")  # if the attr does not exist
print(year)
