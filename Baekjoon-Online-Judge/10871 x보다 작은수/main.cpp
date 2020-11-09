#include<algorithm>
#include<vector>
#include<stdio.h>

using namespace std;

int main()
{
    vector <int> l;
    int n,x,b;    scanf("%d %d",&n,&x);
    for(int i=0;i<n;i++){
        scanf("%d",&b);
        l.push_back(b);
    }
    for(int i=0;i<n;i++){
        if(l[i]<x)
            printf("%d ",l[i]);
    }
    return 0;
}

