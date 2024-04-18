n = int(input())

dp = []
for i in range(n):
    dp.append(-1)

# print(dp[0])    

def fib(x):
    if x==1:
        return 0
    elif x == 2:
        return 1
    elif dp[x-1] != -1:
        return dp[x-1]
    else:
        ans = fib(x-1) + fib(x-2)
        dp[x-1] = ans
        return ans
    
res = fib(n)
print(res)