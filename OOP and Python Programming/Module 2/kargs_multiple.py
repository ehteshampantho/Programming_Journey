def full_name(first, last):
    name = f'full name is: {first} {last}'
    return name

# take parameters in order(serial wise)
# name = full_name('Alu','kodu')

name = full_name(last='kodu',first='alu')
print(name)

# def famous(**kargs)
def famous_name(first,last,**addition):
    name = f'{first} {last}'
    # print(addition['title'])
    for key,value in addition.items():
        print(key, value)
    return name

name = famous_name(first='taher',last='ali',title='hujur',title2='shayokh',last2='taheri')
print(name)

# def function_name(num1, num2, *args, **kargs):

def a_lot(num1,num2):
    sum = num1 + num2
    mul = num1 * num2
    remain = num1 - num2
    # return [sum,mul,remain]    
    return sum,mul,remain    


everything = a_lot(55,2)
print(everything)