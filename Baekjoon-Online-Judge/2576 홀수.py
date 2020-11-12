n = []
for i in range(7):
    n.append(int(input()))
k = []
for i in range(7):
    if n[i] % 2 == 1:
        k.append(n[i])
if k:
    print(sum(k))
    print(min(k))
else:
    print(-1)