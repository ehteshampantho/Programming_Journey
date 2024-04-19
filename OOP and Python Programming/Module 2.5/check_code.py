a,b = input().split()

a_int = int(a)
b_int = int(b)

s = input()

#val == 0 or val == 1 or val == 2 or val == 3 or val == 4 or val == 5 or val == 6 or val == 7 or val ==8 or val ==9

flag = False
for i,val in enumerate(s):
    if i == a_int and val == '-':
        flag = True
    elif val == '-':
        flag = False

if flag:
    print("Yes")
else:
    print("No")
