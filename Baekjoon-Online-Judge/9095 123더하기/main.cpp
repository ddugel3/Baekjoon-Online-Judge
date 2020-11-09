#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int memo[20];

int main(void){
    memo[1]=1;  memo[2]=2;  memo[3]=4;
    for(int i=4;i<15;i++)   memo[i]=memo[i-1]+memo[i-2]+memo[i-3];
    int t;  scanf("%d",&t);
    while(t--){
        int n;  scanf("%d",&n);
        printf("%d\n",memo[n]);
    }
    return 0;
}
