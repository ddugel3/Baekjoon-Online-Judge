#include<stdio.h>

int bp[105];
int res0=0,res1=0;

int fibo(int n){
    if(n==0)        return 0;
    if(n==1)        return 1;
    if(bp[n]!=0)    return bp[n];
    return bp[n]=fibo(n-1)+fibo(n-2);
}
int main(void){
    int T,N;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        scanf("%d",&N);
        if(N==0){
            res0=1; res1=0;
        }
        else{
            res0=fibo(N-1);
            res1=fibo(N);
        }
        printf("%d %d\n",res0,res1);
    }
    return 0;
}
