#include<stdio.h>
#include<string.h>
#include<queue>

using namespace std;
priority_queue<int> pq;

int main(void)
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        if(x==0){
            if(pq.empty())
                printf("0\n");
            else{
                printf("%d\n",(-1)*pq.top());
                pq.pop();
            }
        }
        else
            pq.push((-1)*x);
    }
    return 0;
}
