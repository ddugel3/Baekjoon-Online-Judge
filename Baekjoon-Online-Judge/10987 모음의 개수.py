'''s = input()
find = ['a','e','i','o','u']
cnt =0
for i in s:
    for j in find:
        if i==j:    cnt+=1
print(cnt)'''

a,b = map(int,input().split())
print(b-a,b)