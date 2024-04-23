s = input()

res = s.split()

final2 = ""
for w in res:
    final = w[::-1]
    if len(final2) == 0:
        final2 = final2 + final
    else:
        final2 = final2 +" "+ final 

print(final2)
