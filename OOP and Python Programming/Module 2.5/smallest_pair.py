t = int(input())

for i in range(0,t):
    n = int(input())
    
    num = list(map(int, input().split()))[:n]
    
    mn = 1e15
    # 20 1 9 4 
    for key_i, val_i in enumerate(num):
        for key_j, val_j in enumerate(num[key_i+1:],key_i+1):
            val = val_i + val_j + key_j - key_i
            # print(val_i,val_j,key_j,key_i)
            # if(val < mn):
            #     mn = val
            mn = min(mn,val)
            # print(val)
    
    print(mn)
