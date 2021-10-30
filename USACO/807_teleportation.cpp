// http://www.usaco.org/index.php?page=viewproblem2&cpid=807

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
typedef long long ll;
using namespace std;

int main () {
  freopen("teleport.in", "r", stdin);
  freopen("teleport.out", "w", stdout);
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int a, b, x, y;
  cin >> a >> b >> x >> y;

  cout << min({abs(a - b), abs(a - x) + abs(b - y), abs(a - y) + abs(b - x)}) << "\n";
  return 0;
}
