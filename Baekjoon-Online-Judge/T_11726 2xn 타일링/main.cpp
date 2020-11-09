#include<stdio.h>

int tile();
int bp[1005];
const int x=10007;

int tile(int n){
    if(n==0)        return 0;
    if(n==1)        return 1;
    if(n==2)        return 2;
    if(bp[n]!=0)    return bp[n];
    return bp[n]=(tile(n-1)+tile(n-2))%x;
}
int main(void){
    int N;
    scanf("%d",&N);
    if(N==1){
        int res=1;
        printf("%d\n",res%x);
    }
    else{
        int res=tile(N);
        printf("%d\n",res);
    }

    return 0;
}
