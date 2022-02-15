// https://cses.fi/problemset/task/1754

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
typedef long long ll;
using namespace std;

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  ll t, a, b;
  cin >> t;
  for (; t > 0; --t) {
    cin >> a >> b;
    if ((a+b) % 3 == 0 && llabs(a-b) <= max(a,b)/2) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }

  return 0;
}
