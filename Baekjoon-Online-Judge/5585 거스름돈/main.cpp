#include<stdio.h>

int main(void){
    int N;  scanf("%d",&N);
    N=1000-N;
    int t=0;
    do{
        if((N/500)>=1){
            t+=(N/500);
            N%=500;
        }
        else if((N/100)>=1){
            t+=(N/100);
            N%=100;
        }
        else if((N/50)>=1){
            t+=(N/50);
            N%=50;
        }
        else if((N/10)>=1){
            t+=(N/10);
            N%=10;
        }
        else if((N/1)>=1){
            t+=N;
            break;
        }
        else
            break;
    }while(N>0);
    printf("%d",t);

    return 0;
}
