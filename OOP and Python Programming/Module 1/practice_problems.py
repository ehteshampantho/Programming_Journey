# 1. Take three numbers as input and show the largest number

""" a = input("Give number 1: ")
b = input("Give number 2: ")
c = input("Give number 3: ")

a_int = int(a)
b_int = int(b)
c_int = int(c)

if(a>b and a>c):
    print(a, "is the largest number")
elif(b>a and b>c):
    print(b, "is the largest number")
else:
    print(c, "is the largest number") """

# 2. Take 3 numbers from the user and give the sum of the numbers

""" a = input("Give number 1: ")
b = input("Give number 2: ")
c = input("Give number 3: ")

a_int = int(a)
b_int = int(b)
c_int = int(c)

total = a_int + b_int + c_int

print(total) """

# 3. Run a loop and show the odd numbers between 39 to 68

""" for i in range(39,68):
    if(i%2 == 1):
        print(i) """

# 4. Grade calculator

a = input("Give score: ")

a_int = int(a)

if(a_int>=80):
    print("Grade A+")
elif(a_int>=70 and a_int<80):
    print("Grade A")
elif(a_int>=60 and a_int<70):
    print("Grade B")
elif(a_int>=50 and a_int<60):
    print("Grade C")
elif(a_int>=40 and a_int<50):
    print("Grade D")
elif(a_int>=33 and a_int<40):
    print("Grade E")
else:
    print("Grade F")
