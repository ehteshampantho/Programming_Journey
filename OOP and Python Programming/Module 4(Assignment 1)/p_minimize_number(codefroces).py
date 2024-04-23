n = int(input())

li = list(map(int, input().split()))

cnt = 0

while True:
    flag = True
    for i,num in enumerate(li):
        if(num % 2 == 0):
            li[i] = num / 2
        elif num % 2 == 1:
            flag = False
            break
    if(flag == False):
        break    
    cnt += 1

print(cnt)