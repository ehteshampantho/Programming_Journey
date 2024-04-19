n = int(input())
 
final = list(map(int,input().strip().split()))[:n]
# print(final)
 
mx = max(final)
mx_idx = final.index(mx)
mn = min(final)
mn_idx = final.index(mn)
 
# for i in final: #4,10,1,3,2
#     if i == mx:
#         print(mn,end=" ")
#     elif i == mn:
#         print(mx,end=" ")
#     else:
#         print(i,end=" ")
 
# final[final.index(mx)], final[final.index(mn)] = final[final.index(mn)] , final[final.index(mx)]
 
temp = final[mx_idx]
final[mx_idx] = final[mn_idx]
final[mn_idx] = temp

# print(final)
 
print(*final)


