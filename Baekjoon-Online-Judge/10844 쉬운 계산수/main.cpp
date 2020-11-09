#include<stdio.h>
const int DVD=1000000000;
int dp[11][105];
int main(void){
    int n;
    scanf("%d",&n);
    for(int i=0;i<=0;i++)
        dp[i][1]=1;
    for(int i=2;i<=n;i++){
        for(int j=0;j<=9;j++){
            if(j==0)
                dp[j][i]=dp[1][i-1];
            else if(j==9)
                dp[j][i]=dp[8][i-1];
            else
                dp[j][i]=(dp[j-1][i-1]+dp[j+1][i-1])%DVD;
            }
    }
    int ans=0;
    for(int i=1;i<=9;i++)
        ans=(ans+dp[i][n])%DVD;
    printf("%d",ans);
    return 0;
}
