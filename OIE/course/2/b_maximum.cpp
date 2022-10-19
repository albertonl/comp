#include <bits/stdc++.h>
#pragma GCC optimize("O3")
typedef long long ll;
using namespace std;

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  ll n, m, aux, maxn = 0;
  ll max[2] = {0, 0};
  cin >> n >> m;

  for (ll i = 0; i < n; i++) {
    for (ll j = 0; j < m; j++) {
      cin >> aux;
      if (aux > maxn) {
        maxn = aux;
        max[0] = i;
        max[1] = j;
      }
    }
  }

  cout << max[0] << "\n" << max[1] << "\n";
  return 0;
}
