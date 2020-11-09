#include<stdio.h>
#include<algorithm>

using namespace std;
int main()
{
    int n,p[1005],sum=0;  scanf("%d",&n);
    for(int i=0;i<n;i++)    scanf("%d",&p[i]);
    sort(p,p+n);
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++)
            sum+=p[j];
    }
    printf("%d",sum);
}
