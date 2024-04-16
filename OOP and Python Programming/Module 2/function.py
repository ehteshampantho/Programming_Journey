def double_it(num):
    result = num * 2
    print(result)
    return result

double_it(8)
double_it(88)

def sum(num1 ,num2):
    res = num1+num2
    return res

total = sum(5,7)
print("total value",total)

double = double_it(total)
print("total of double_it",double)
