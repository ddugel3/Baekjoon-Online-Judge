#include<stdio.h>
#include<algorithm>
#include<vector>
#include<utility>

using namespace std;

int main()
{
    vector< pair<int,int> > s;
    int n;  scanf("%d",&n);
    for(int i=0;i<n;i++){
        int b,c;
        scanf("%d %d",&b,&c);
        s.push_back(make_pair(b,c));
    }

    int res[1000]={0,};
    for(int i=0;i<n;i++){6
        for(int j=0;j<n;j++){
        if(s[i].first!=s[j].first && s[i].second>s[j].second){
            res[i]+=s[j].second;
        }
    }}
    for(int i=0;i<n;i++)
        printf("%d \n",res[i]);
}
