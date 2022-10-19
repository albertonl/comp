#include <bits/stdc++.h>
#pragma GCC optimize("O3")
typedef long long ll;
using namespace std;

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  ll n, m, max = 0;
  cin >> n >> m;

  vector<vector<ll>> v(n, vector<ll>(m));
  for (ll i = 0; i < n; i++) {
    for (ll j = 0; j < m; j++) {
      cin >> v[i][j];
    }
  }

  for (ll j = 0; j < m; j++) {
    for (ll i = 0; i < n; i++) {
      if (v[i][j] > max) max = v[i][j];
    }

    cout << max << ((j == m-1) ? "\n" : " ");
    max = 0;
  }

  return 0;
}
