n = int(input())

arr = list(map(int, input().split()))[:n]

arr2 = arr.copy()

arr2.reverse()

if(arr==arr2):
    print("YES")
else:
    print("NO")
