#include<stdio.h>

#define N 102

int main()

{

    char miro[N][N]={0};

    int i,j,k,h,w,x,y,p,q;

    int Queue[2][N*N], A[4]={0,1,0,-1},B[4]={1,0,-1,0};

    scanf("%d %d",&h,&w);

    for(i=0;i<=h+1;i++){ miro[i][0]=miro[i][w+1]='#';}

    for(i=0;i<=w+1;i++){ miro[0][i]=miro[h+1][i]='#';}

    for(i=1;i<=h;i++){

        for(j=1;j<=w;j++){

            scanf(" %c",&miro[i][j]);

            if(miro[i][j]=='1'){ x=i; y=j;}

            if(miro[i][j]=='0'){ p=i; q=j;}

        }

    }

    int first=0,second=1;

    Queue[0][0]=x; Queue[1][0]=y;

    miro[x][y]=0;

    do{

        int s=Queue[0][first];

        int t=Queue[1][first];

        for(k=0;k<4;k++){

            if(miro[s+A[k]][t+B[k]]=='1' || miro[s+A[k]][t+B[k]]=='0')

            {

                miro[s+A[k]][t+B[k]]=miro[s][t]-1;

                Queue[0][second]=s+A[k];

                Queue[1][second]=t+B[k];

                second++;

            }

            if(miro[p][q]<0) break;

        }

        first++;

    }while(first<second);

    if(miro[p][q]<0) printf("%d",miro[p][q]*(-1));

    else printf("-1");

    printf("\n\n");

    for(i=0;i<=h+1;i++){

        for(j=0;j<=w+1;j++){

            printf("%4d",miro[i][j]);

        }

        printf("\n");

    }

    return 0;

}
