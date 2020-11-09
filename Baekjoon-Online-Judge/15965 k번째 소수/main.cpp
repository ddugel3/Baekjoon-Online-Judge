#include<stdio.h>
const int x=10000000;

int main()
{
    int k,all[2][x],a=1;
    scanf("%d",&k);
    for(int i=1;i<=x;i++){
        all[0][i]=1;
    }
    for(int r=2;r<=x;r++){
        for(int t=r*2;t<=x;t+=r){
            all[0][t]=0;
        }
    }
    for(int i=2;i<=x;i++){
        if(all[0][i]==1){
            all[1][a]=i;
            //printf("%d  %d\n",i,a);
            a++;
        }
    }
    printf("%d",all[1][k]);

}
