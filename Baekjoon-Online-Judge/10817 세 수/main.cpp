#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector <int> a;
    int b;
    for(int i=0;i<3;i++){
        scanf("%d",&b);
        a.push_back(b);
    }
    sort(a.begin(),a.end());
    printf("%d",a[1]);

    return 0;
}
