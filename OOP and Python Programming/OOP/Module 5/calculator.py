class Calculator:
    brand = 'Casio MS990'
    
    def add(self,num1,num2):
        res = num1 + num2
        return res
        
    def deduct(self,num1,num2):
        res = abs(num1-num2)
        return res
        
    def multiply(self,num1,num2):
        res = num1 * num2
        return res
        
    def divide(self,num1,num2):
        res = num1/num2
        return res
        
        
cal = Calculator()

print(cal.add(1,2))
print(cal.deduct(1,2))
print(cal.multiply(2,2))
print(cal.divide(2,2))
