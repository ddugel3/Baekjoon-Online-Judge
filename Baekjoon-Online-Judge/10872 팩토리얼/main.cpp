/*
#include<stdio.h>

int main(void)
{
    int fac[100]={0,},i,N;
    scanf("%d",&N);
    fac[0]=1;   fac[1]=1;
    for(i=1;i<=N;i++)
        fac[i]=i*fac[i-1];
    printf("%d",fac[N]);
    return 0;
}
*/

#include<stdio.h>

int memo[105];
int fac(int);

int fac(int n){
    if(n==0)
        return 1;
    if(memo[n]!=0)
        return memo[n];
    memo[n]=n*fac(n-1);
    return memo[n];
}

int main(void){
    int N;
    scanf("%d",&N);
    int ans = fac(N);
    printf("%d",ans);
}
