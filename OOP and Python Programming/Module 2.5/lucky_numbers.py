a,b = input().split()
a_int = int(a)
b_int = int(b)

# num = 174
reversed_num = 0
final = []
for num in range(a_int,b_int+1):
    num2 = num 
    while num2 != 0:
        last_digit = num2 % 10
        if(last_digit == 4 or last_digit == 7):
            reversed_num = reversed_num * 10 + last_digit
            num2 //= 10
        else:
            break

    if(num2 == 0):
        final.append(num)

if len(final) == 0:
    print("-1")
else:
    print(*final)

# while num != 0:
#     last_digit = num % 10
#     if(last_digit == 4 or last_digit == 7):
#         reversed_num = reversed_num * 10 + last_digit
#         num //= 10
#     else:
#         break

# if(num == 0):
#     print("Lucky")
# else:
#     print("-1")