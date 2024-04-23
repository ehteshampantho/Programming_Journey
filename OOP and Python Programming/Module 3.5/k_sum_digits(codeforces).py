n = int(input())

digits = input()[:n]

sm = 0
for ch in digits:
    i = int(ch)
    sm += i
    
print(sm)
