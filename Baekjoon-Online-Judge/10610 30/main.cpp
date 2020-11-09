#include<stdio.h>
#include<string.h>
#include<algorithm>

using namespace std;

const int SZ=100000;

bool mycmp(int n,int m){
    if(n<m)
        return 0;
    else
        return 1;
}

int main(void){
    char N[SZ]; scanf("%s",N);
    int l=strlen(N);
    int a=0;
    sort(N,N+l,mycmp);
    for(int i=0;i<l;i++)
        a+=N[i]%48;
    if(N[l-1]=='0' && a%3==0)
        printf("%s",N);
    else
        printf("-1");
    return 0;
}
