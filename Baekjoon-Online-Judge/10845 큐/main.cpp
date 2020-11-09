#include<stdio.h>
#include<string.h>
#include <queue>

using namespace std;
char ope[10];
queue<int> q;

int main(void){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",ope);
        if(!strcmp(ope,"push")){
            int x;
            scanf("%d",&x);
            q.push(x);
        }
        else if(!strcmp(ope,"pop")){
            if(q.empty())
                printf("-1\n");
            else{
                printf("%d\n",q.front());
                q.pop();
            }
        }
        else if(!strcmp(ope,"size")){
            printf("%d\n",q.size());
        }
        else if(!strcmp(ope,"empty")){
            if(q.empty())
                printf("1\n");
            else
                printf("0\n");
        }
        else if(!strcmp(ope,"front")){
            if(q.empty())
                printf("-1\n");
            else
                printf("%d\n",q.front());
        }
        else if(!strcmp(ope,"back")){
            if(q.empty())
                printf("-1\n");
            else
                printf("%d\n",q.back());
        }
    }
    return 0;
}
