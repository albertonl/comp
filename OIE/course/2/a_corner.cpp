#include <bits/stdc++.h>
#pragma GCC optimize("O3")
typedef long long ll;
using namespace std;

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  ll n, m, aux, sum = 0;
  cin >> n >> m;

  for (ll i = 0; i < n; i++) {
    for (ll j = 0; j < m; j++) {
      cin >> aux;
      if ((i == 0 || i == n-1) && (j == 0 || j == m-1)) sum += aux;
    }
  }

  cout << sum << "\n";
  return 0;
}
