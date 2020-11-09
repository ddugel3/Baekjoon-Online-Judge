#pragma warning(disable:4996)
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int arr[1005];
vector<pair<int, pair<int, int>>> score;

int main(void) {
   int n;
   scanf("%d", &n);
   for (int i = 0; i < n; i++) {
      int a, b, c;
      scanf("%d %d %d", &a, &b, &c);
      score.push_back (make_pair(c, make_pair(a, b)));
   }

   sort(score.rbegin(), score.rend());

   int cnt = 0;
   for (int i = 0; i < n; i++) {
      if (arr[score[i].second.first] < 2) {
         printf("%d %d\n", score[i].second.first, score[i].second.second);
         arr[score[i].second.first]++;
         cnt++;
         if (cnt >= 3) {
            return 0;
         }
      }

   }
   return 0;
}
