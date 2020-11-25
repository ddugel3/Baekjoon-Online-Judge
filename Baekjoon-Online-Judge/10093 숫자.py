a,b = map(int, input().split())
if a > b:
    print(a-b-1)
    for i in range(1,a-b):
        print(b+i)
elif a==b:
    print('0')
elif b>a:
    print(b-a-1)
    for i in range(1,b-a):
        print(a+i)