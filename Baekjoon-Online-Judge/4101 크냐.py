
while 1:
    a, b = map(int, input().split())
    if a==0 and b==0:   break
    else:
        print('Yes') if a>b else print("No"
"""
#2752
a = [int(x) for x in input().strip().split()]
a.sort()
for i in a:
    print(i,end=" ")

a = int(input())
b = int(input())
if a>=3 and b<=4:   print("TroyMartian")
if a<=6 and b>=2:   print("VladSaturnian")
if a<=2 and b<=3: print("GraemeMercurian")

n = int(input())
for i in range(n):
    a = int(input())
    sum = 0
    arr = [int(x) for x in range(1, a + 1)]
    for i in arr:
        if i%2==1:  sum += i
    print(sum)
"""