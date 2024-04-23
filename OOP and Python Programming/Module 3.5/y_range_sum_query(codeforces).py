n,q = input().split()
n_int = int(n)
q_int = int(q)


arr = list(map(int, input().split()))[:n_int]

pre = [0] * (n_int)
pre[0] = arr[0]

# for i,num in enumerate(arr[1:],1):
#     print(i,num)


for i,num in enumerate(arr[1:],1):
    pre[i] = arr[i] + pre[i-1]
    # print(i,arr[i])

sum = 0
for i in range(0,q_int):
    l,r = input().split()
    l_int = int(l)-1
    r_int = int(r)-1
    if l_int == 0:
        sum = pre[r_int]
        print(sum)
    else:
        sum = pre[r_int] - pre[l_int-1]
        print(sum)

# print(arr)
# print(pre)
