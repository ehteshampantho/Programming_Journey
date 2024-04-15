# in, not, not in, is
# >, <, >=, <=, ==, !=

a = 1
boss = True
if(a > 5):
    print("5 er besi");
    print("koto besi ke jane")
elif(a > 3):
    print("olpo boro")
elif(a==2):
    print("ekdm dui er soman soman")
else:
    print("choto choto raat e lombi hoye")
    

if(boss is True):
    print("tel bakso niye ashtesi boss re tel dimu")
else:
    print("lunch er pore asen")


if(boss is not True):
    print("lunch er pore asen")
else:
    print("tel bakso niye ashtesi boss re tel dimu")
    
coin = 'head'    
# nested conditions
if(boss == True):
    print("boss you are joss")
    if coin == "tail":
        print("batting")
    else:
        print("bowling")
        if 5 > 2 or boss != True:
            print('do something')
            if 8%2 == 0 and 5%2==1:
                print("even: 8 is an even number")
else:
    print("you are loss not a boss")
