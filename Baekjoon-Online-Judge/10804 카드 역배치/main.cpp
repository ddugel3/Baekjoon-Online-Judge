#include<stdio.h>

int rev[22]={0,},card[21]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};


int main()
{
    int a[10],b[10];

    for(int i=0;i<10;i++)
        scanf("%d %d",&a[i],&b[i]);
    for(int i=0;i<10;i++){
        int m;
        for(int j=a[i];j<=b[i];j++)
            rev[j]=card[j];
        m=b[i];
        for(int k=a[i];k<=b[i];k++){
            card[k]=rev[m];
            m--;
        }
    }
    for(int i=1;i<=20;i++)
        printf("%d ",card[i]);
    return 0;
}
