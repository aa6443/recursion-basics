class Item:   #class
    def calculate_total_price(self,x,y): #self takes item1 as argument
        return x*y                      #item1.price=x item1.quantity=y

#method
item1 = Item()
item1.name="Phone"
item1.price= 100
item1.quantity =5
print(item1.calculate_total_price(item1.price,item1.quantity))

item2= Item()
item2.name="Laptop"
item2.price= 1000
item2.quantity =3
print(item2.calculate_total_price(item2.price,item2.quantity))


"""print(type(item1)) #str
print(type(item1.price)) #int
print(type(item1.quantity))
print(type(item1.quantity)) #int"""

"""random_str ="aaa"
print(random_str.upper())"""