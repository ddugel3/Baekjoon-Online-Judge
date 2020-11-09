#include<stdio.h>
#include<string.h>

int main(){
    char str[1000];
    int n,res[1000],sum=0;
    scanf("%d",&n);
    scanf("%s",str);
    for(int i=0;i<n;i++)
        res[i]=int(str[i]-'0');
    for(int i=0;i<n;i++)
        sum+=res[i];
    printf("%d",sum);

}
