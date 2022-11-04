// https://cses.fi/problemset/task/1643/

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
typedef long long ll;
using namespace std;

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  ll n, x, max = numeric_limits<ll>::min(), curr = 0;
  cin >> n;

  for (ll i = 0; i < n; i++) {
      cin >> x;
      curr += x;

      if (curr > max) max = curr;
      if (curr < 0) curr = 0;
  }

  cout << max << "\n";
  return 0;
}
