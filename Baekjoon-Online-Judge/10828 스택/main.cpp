#include<stdio.h>
#include<string.h>
#include <stack>

using namespace std;
char ope[10];
stack<int> s;

int main(void){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",ope);
        if(!strcmp(ope,"push")){
            int x;
            scanf("%d",&x);
            s.push(x);
        }
        else if(!strcmp(ope,"pop")){
            if(s.empty())
                printf("-1\n");
            else{
                printf("%d\n",s.top());
                s.pop();
            }
        }
        else if(!strcmp(ope,"size")){
            printf("%d\n",s.size());
        }
        else if(!strcmp(ope,"empty")){
            if(s.empty())
                printf("1\n");
            else
                printf("0\n");
        }
        else if(!strcmp(ope,"top")){
            if(s.empty())
                printf("-1\n");
            else
                printf("%d\n",s.top());
        }
    }
    return 0;
}
