#inlcude<stdio.h>
#include<algorithm>

#define N 100002;

using namespace std;

typedef struct arrow {
    int w, c;
}arrow;

arrow A[N];

bool cmp(const arrow &g, const arrow &h) {
	if (g.c < h.c) return true;
	else if (g.c == h.c && g.w < h.w) return true;
	else return false;
}

int main(){
    int n;  scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&A[i].w,&A[i].c);
    }
    sort(A,A+p,cmp);
    if (A[0].c == A[1].c)
        x += (A[1].w - A[0].w);
	if (A[p - 2].c == A[p - 1]c)
        x += (A[p - 1].w - A[p - 2].w);
	for (i = 1; i < p-1; i++) {
		y = -1, z = -1;
		if (A[i].c == A[i - 1].c)
            y = A[i].w - A[i - 1].w;
		if (A[i].c == A[i + 1].c)
            z = A[i + 1].w - A[i].w;
		if (y == -1 && z == -1)
            continue;
		else if (y == -1)
            x += z;
		else if (z == -1)
            x += y;
		else
            x += ((y < z) ? y : z);
	}
	printf("%lld", x);
	return 0;
}
