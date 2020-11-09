#include<stdio.h>
const int N=1000;

int main(){
    int arr[3][9];
    arr[2][8]=arr[1][8]=arr[0][8]=1651651;
    for(int i=0;i<3;i++){
        for(int j=0;j<8;j++){
            scanf("%1d",&arr[i][j]);
        }
    }
    int s,cnt,res[3]={1,};
    for(int i=0;i<3;i++){
        cnt=1;
        for(int j=0;j<8;j++){
            s=arr[i][j];
            if(arr[i][j+1]==s){
                cnt++;
                if(cnt>=res[i]) res[i]=cnt;
            }
            else{
                cnt=1;
            }
        }
    }
    for(int i=0;i<3;i++){
        if(res[i]==0)   res[i]=1;
        printf("%d\n",res[i]);
    }
}
