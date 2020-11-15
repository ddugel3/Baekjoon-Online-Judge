a,b=0,0
for i in range(int(input())):
    n = int(input())
    if n==0:    a+=1
    else:       b+=1
print('Junhee is not cute!') if a>b else print('Junhee is cute!')
