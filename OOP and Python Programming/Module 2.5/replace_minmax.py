n = int(input())

final = list(map(int,input().strip().split()))[:n]
# print(final)

mx = max(final)
mn = min(final)

for i in final: #4,10,1,3,2,10
    if i == mx:
        print(mn,end=" ")
    elif i == mn:
        print(mx,end=" ")
    else:
        print(i,end=" ")

# final[final.index(mx)], final[final.index(mn)] = final[final.index(mn)] , final[final.index(mx)]

# temp = final[final.index(mx)]
# final[final.index(mx)] = final[final.index(mn)]
# final[final.index(mn)] = temp

# print(*final)

