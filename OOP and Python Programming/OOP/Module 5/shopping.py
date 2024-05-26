class Shopping:
    
    def __init__(self,name):
        self.name = name
        self.cart = []
        
    def add_to_cart(self,item,price,quantity):
        product = {'item':item, 'price': price, 'quantity':quantity}
        self.cart.append(product)
        
    def remove_item(self,item):
        for idx,it in enumerate(self.cart):
            # print(idx,it)
            for value in it.values():
                # print(value)
                if value == item:
                    # print(idx,value)
                    del self.cart[idx]
        
    def checkout(self,amount):
        total = 0
        for item in self.cart:
            total += item['price'] * item['quantity']
            
        print("total price:", total)
        
        if amount < total:
            print(f"Please provide {total - amount} more")
        else:
            extra = amount - total
            print(f"Here is your items and extra money: {extra}")
            
swapan = Shopping("Alan Swapan")
swapan.add_to_cart('alu',50,6)
swapan.add_to_cart('dim',12,24)
swapan.add_to_cart('rice',50,5)
    
print(swapan.cart)
# swapan.checkout(600)
# swapan.checkout(1600)

swapan.remove_item("alu")
print(swapan.cart)

