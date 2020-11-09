#include<stdio.h>

int gcd(int n,int m){
    return n%m ? gcd(m,n%m):m;
}
int main(){
    int A1,A2,B1,B2,A,B,res;
	scanf("%d %d %d %d", &A1, &A2, &B1, &B2);
	A=A1*B2+A2*B1;
    B=A2*B2;
    res=gcd(A,B);
	printf("%d %d\n", A/res, B/res);
	return 0;
}
