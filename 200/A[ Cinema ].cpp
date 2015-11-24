#include <bits/stdc++.h>

using namespace std;

#define left LEFT
#define right RIGHT

const int N = 2010;

int left[N][N];
int right[N][N];

int get(int i, int p[N]) {
  return i == p[i] ? i : p[i] = get(p[i], p);
}

bool check(int bd, int bi, int bj, int d, int i, int j, bool swp) {
  if(swp) {
    swap(bi, bj); swap(i, j);
  }
  if(bd > d) return true; else if(bd < d) return false;
  if(i < bi) return true; else if(i > bi) return false;
  return j < bj;
}

int main() {
  int n, m, k;
  scanf("%d %d %d", &n, &m, &k);
  bool swp = (n > m);
  if(swp) swap(n, m);
  for(int i = 1; i <= n; ++i) {
    for(int j = 1; j <= m; ++j) {
      left[i][j] = right[i][j] = j;
    }
  }
  while(k--) {
    int ni, nj; scanf("%d %d", &ni, &nj);
    if(swp) swap(ni, nj);
    int best = n * m, bi, bj;
    for(int d = 0; d <= best; ++d) {
      for(int di = -1; di <= 1; di += 2) {
        int i = ni + di * d;
        if(i < 1 || i > n) {
          continue;
        }
        int j = get(nj, left[i]);
        if(j != 0 && check(best, bi, bj, abs(i - ni) + abs(j - nj), i, j, swp)) {
          best = abs(i - ni) + abs(j - nj);
          bi = i; bj = j;
        }
        j = get(nj, right[i]);
        if(j != 0 && check(best, bi, bj, abs(i - ni) + abs(j - nj), i, j, swp)) {
          best = abs(i - ni) + abs(j - nj);
          bi = i; bj = j;
        }
      }
    }
    if(swp) printf("%d %d\n", bj, bi);
    else printf("%d %d\n", bi, bj);
    left[bi][bj] = left[bi][bj - 1];
    right[bi][bj] = right[bi][bj + 1];
  }
  return 0;
}