#include<stdio.h>
#include<string.h>

int main()
{
    char str[1000]={0};
    scanf("%s",str);
    int a=0,l=strlen(str);
    for(int j=0;j<l;j++){
        for(int i=0;i<10;i++){
            if(str[a]!=0)
                printf("%c",str[a]);
                a++;
            if(a==l)
                break;
        }
        printf("\n");
    }
}
