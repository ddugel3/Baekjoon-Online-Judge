#include <stdio.h>
#include <string.h>

int main(){
    int arr[9][9] = {0, };
    int i, j, max = 1, x = 0, y = 0;
    for(i = 0; i < 9; i++){
        for(j = 0; j < 9; j++){
            scanf("%d", &arr[i][j]);
            if(max <= arr[i][j]){¤Ì
                max = arr[i][j];
                x = i;
                y = j;
            }
        }
    }
    printf("%d\n%d %d", max, x + 1, y + 1);
}
