# lambda

# def doubled(num):
#     return num * 2

doubled = lambda num: num * 2
sqaured = lambda num: num ** 2
    
result = doubled(44)
output = sqaured(9)
# print(result, output)

add = lambda x,y : x + y
sum = add(11,33)
# print(sum)

numbers = [12, 56, 98, 78, 56, 12, 6, 98]
# doubled_nums = map(doubled, numbers)
doubled_nums = map(lambda x: x * 2, numbers)
sqaured_nums = map(lambda x: x*x, numbers)
print(numbers)
# print(list(doubled_nums))
print(list(sqaured_nums))

actors = [
    {"name":"shabana","age":65},
    {"name":"shabnoor","age":45},
    {"name":"sabila noor","age":30},
    {"name":"srabonti","age":38},
    {"name":"shaon","age":47}
    ]

juniors = filter(lambda actor: actor['age'] < 40, actors)
Fivers = filter(lambda actor: actor['age'] % 5 == 0, actors)
# print(list(juniors))
print(list(Fivers))
