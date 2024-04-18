numbers = input()
num_int = int(numbers)
num_op = num_int
reversed_num = 0

while num_op != 0:
    digit = num_op % 10
    reversed_num = reversed_num * 10 + digit
    num_op //= 10
        

print(reversed_num)

if(num_int == reversed_num):
    print("YES")
else:
    print("NO")