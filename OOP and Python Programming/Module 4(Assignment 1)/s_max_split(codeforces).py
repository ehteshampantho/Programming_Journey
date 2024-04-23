s = input()

l = 0
r = 0 

ans = ""

li = [] 

for ch in s:
    if(ch == "L"):
        l += 1
        ans += ch
    elif ch == "R":
        r += 1
        ans += ch

    if l == r:
        li.append(ans)
        ans = ""

print(len(li))
for w in li:
    print(w)
