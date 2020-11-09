#include<stdio.h>

int main(void)
{
    int N,i,j;
    scanf("%d",&N);
    for(i=N;i>0;i--){
        for(j=0;j<i-1;j++)
            printf(" ");
        for(j=N;j>=i;j--)
            printf("*");
        printf("\n");
    }
    return 0;
}
