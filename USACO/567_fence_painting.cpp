// http://www.usaco.org/index.php?page=viewproblem2&cpid=567

#include <bits/stdc++.h>
#pragma GCC optimize("O2")
typedef long long ll;
using namespace std;

int main () {
  freopen("paint.in", "r", stdin);
  freopen("paint.out", "w", stdout);
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  int a, b, c, d, max, min;
  cin >> a >> b >> c >> d;

  max = (b > d) ? b : d;
  min = (a < c) ? a : c;

  if ((min == a && b > c) || (min == c && d > a)) cout << max - min << "\n";
  else cout << b - a + d - c << "\n";
  return 0;
}
