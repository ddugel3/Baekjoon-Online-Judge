#include<stdio.h>
int gcd(int n,int m){
    return n%m ? gcd(m,n%m):m;
}
int main(){
    int res,x,y; scanf("%d %d",&x,&y);
    res=gcd(x,y);
    printf("%d",(((x+y)/res)-1)*res);
    return 0;
}
