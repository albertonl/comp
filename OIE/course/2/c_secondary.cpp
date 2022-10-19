#include <bits/stdc++.h>
#pragma GCC optimize("O3")
typedef long long ll;
using namespace std;

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  ll n, m, aux, sum = 0;
  cin >> n;
  m = n;

  for (ll i = 0; i < n; i++) {
    m--;
    for (ll j = 0; j < n; j++) {
      cin >> aux;
      if (j == m) {
        sum += aux;
      }
    }
  }

  cout << sum << "\n";
  return 0;
}
