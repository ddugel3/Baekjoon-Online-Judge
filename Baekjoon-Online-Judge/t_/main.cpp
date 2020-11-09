#include<stdio.h>
int main(void){
    long long int N;  scanf("%lld",&N);
    if(N%3==0)  printf("%lld",N/3);
    else        printf("%lld",N/3+1);
}
