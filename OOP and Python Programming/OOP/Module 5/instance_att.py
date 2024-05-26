class Shop:
    shopping_mall = "Jamuna"           
    def __init__(self,buyer):
        self.buyer = buyer
        self.cart = []         # cart is a instance attribute
        
    def add_to_cart(self,item):
        self.cart.append(item)
        
mehjabeen = Shop('meh za beeen')
mehjabeen.add_to_cart("shoe")
mehjabeen.add_to_cart("phone")
print(mehjabeen.cart)

nisho = Shop("nishi raat er noisho")
nisho.add_to_cart("hat")
nisho.add_to_cart("watch")
print(nisho.cart)


apurbo = Shop("age purbo chilo")
apurbo.add_to_cart("chiruni")
print(apurbo.cart)
