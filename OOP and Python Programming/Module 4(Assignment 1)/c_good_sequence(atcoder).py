n = int(input())

li = list(map(int, input().split()))

dict = {}

for num in li:
    dict[num] = 0

for num in li:
    dict[num] += 1    

r = 0
for key,val in dict.items():
    if(key > val):
        r += val 
    elif key < val:
        r += val - key 

print(r)        