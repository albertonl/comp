#include <bits/stdc++.h>
#pragma GCC optimize("O3")
typedef long long ll;
using namespace std;

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  ll x, y;
  cin >> x >> y;

  if (x > 0) {
    if (y > 0) cout << "1\n";
    else cout << "4\n";
  } else {
    if (y > 0) cout << "2\n";
    else cout << "3\n";
  }

  return 0;
}
