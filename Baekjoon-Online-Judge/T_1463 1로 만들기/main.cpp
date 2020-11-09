#include<stdio.h>

int memo[1000005];
int mn(int a,int b){
    return a<b ? a:b;
    //if(a<b) return a;
    //else return b;
}
int main(void){
    int n;  scanf("%d",&n);
    memo[1]=0;  memo[2]=1;
    for(int i=3;i<=n;i++){
        if(i%6==0)  memo[i]=mn(mn(memo[i/3],memo[i/2]),memo[i-1])+1;
        else if(i%3==0) memo[i]=mn(memo[i/3],memo[i-1])+1;
        else if(i%2==0) memo[i]=mn(memo[i/2],memo[i-1])+1;
        else memo[i]=memo[i-1]+1;
    }
    printf("%d",memo[n]);
    return 0;
}

#include<stido.h>

int main()
