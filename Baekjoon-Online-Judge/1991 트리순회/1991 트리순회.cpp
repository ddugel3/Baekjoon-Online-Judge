#include<stdio.h>

const int SZ=27;

int main(){
    int N;  scanf("%d",&N); getchar();
    int res[SZ]={0,};
    char parent[SZ],left[SZ],right[SZ];
    for(int i=0;i<N;i++){
        parent[i] = getchar();    getchar();
        left[i] = getchar();    getchar();
        right[i] = getchar();    getchar();
    }
    for(int i=0;i<N;i++){
        if(left[i]!='.')
            res[left[i]-'A']=5;
        if(right[i]!='.')
            res[right[i]-'A']=5;
        if(left[i]!='.' && right[i]!='.'){
            res[left[i]-'A']=5;
            res[right[i]-'A']=5;
        }
    }
    for(int i=0;i<N;i++)
        printf("%d",res[i]);



}
