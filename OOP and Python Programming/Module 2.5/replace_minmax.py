n = int(input())

final = list(map(int,input().strip().split()))[:n]
# print(final)

mx = max(final)
mn = min(final)

# final[final.index(mx)], final[final.index(mn)] = final[final.index(mn)] , final[final.index(mx)]
temp = final[final.index(mx)]
final[final.index(mx)] = final[final.index(mn)]
final[final.index(mn)] = temp

print(*final)

