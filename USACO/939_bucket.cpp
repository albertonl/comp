// http://www.usaco.org/index.php?page=viewproblem2&cpid=939

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define f first
#define s second
typedef long long ll;
using namespace std;

int main () {
  freopen("buckets.in", "r", stdin);
  freopen("buckets.out", "w", stdout);
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  pair<int, int> b, r, l;
  int t = 0;
  char c;

  for (int y = 0; y < 10; y++) {
    for (int x = 0; x < 10; x++) {
      cin >> c;
      switch(c) {
        case 'B':
          b = {x, y};
          break;
        case 'R':
          r = {x, y};
          break;
        case 'L':
          l = {x, y};
          break;
      }
    }
  }

  t = abs(b.f - l.f) + abs(b.s - l.s) - 1;
  if (b.s == l.s && b.s == r.s && ((l.f < r.f && r.f < b.f) || (b.f < r.f && r.f < l.f))) {
    t += 2;
  } else if (b.f == l.f && b.f == r.f && ((l.s < r.s && r.s < b.s) || (b.s < r.s && r.s < l.s))) {
    t += 2;
  }

  cout << t << "\n";
  return 0;
}
