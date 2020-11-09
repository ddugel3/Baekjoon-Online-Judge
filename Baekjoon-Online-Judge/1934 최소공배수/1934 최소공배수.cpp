#include<stdio.h>

int gcd(int n,int m){
    return n%m ? gcd(m,n%m):m;
}
int main(){
    int res;
    int T;  scanf("%d",&T);
    for(int i=0;i<T;i++){
        int A,B;    scanf("%d %d",&A,&B);
        printf("%d\n",A*B/gcd(A,B));
    }
    return 0;
}
