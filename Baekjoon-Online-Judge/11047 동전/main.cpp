#include<stdio.h>

int main()
{
    int n,k,arr[12];    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++)    scanf("%d",&arr[i]);
    int sum=k,m=n-1,cnt=0;
    while(sum>0){
        if(sum>=arr[m]){
            sum-=arr[m];
            cnt++;
        }
        else    m--;
    }
    printf("%d",cnt);
}
