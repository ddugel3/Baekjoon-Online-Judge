#include<stdio.h>

int memo[20];

int main(void){
    memo[1]=1;  memo[2]=2;  memo[3]=4;
    int T,j,N;
    scanf("%d",&T);
    for(int j=0;j<T;j++){
        scanf("%d",&N);
        for(int i=4;i<=N;i++)
                memo[i]=memo[i-1]+memo[i-2]+memo[i-3];
        printf("%d\n",memo[N]);
    }
    return 0;
}
