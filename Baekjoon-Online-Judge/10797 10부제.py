a = int(input())
b = [int(x) for x in input().strip().split()]
cnt =0

for i in range(5):
    if b[i]==a:
        cnt += 1

print(cnt)