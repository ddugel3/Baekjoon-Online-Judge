#include<stdio.h>
#include<utility>
#include<algorithm>

using namespace std;
const int SZ=100000;

pair<int,int> arr[SZ];

int main(void){
    int N;  scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d %d",&arr[i].first,&arr[i].second);
    }
    //sort(&arr[0],&arr[N]);
    sort(arr,arr+N);
    for(int i=0;i<N;i++){
        printf("%d %d\n",arr[i].first,arr[i].second);
    }
}
