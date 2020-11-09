#include <stdio.h>

int main(){
	int arr[100] = {0, }, i, cnt = 1, sum = 0, n;
	scanf("%d", &n);
	for(i = 0; i < n; i++){
				scanf("%d", &arr[i]);
	}
	for(i = 0; i < n; i++){
		if(arr[i] == 1){
			sum += cnt;
			cnt++;
		}
		else{
			cnt = 1;
		}
	}
	printf("%d", sum);
}


