#include <bits/stdc++.h>
#pragma GCC optimize("O3")
typedef long long ll;
using namespace std;

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  ll n, aux, max = 0;
  cin >> n;

  for (ll i = 0; i < n; i++) {
    cin >> aux;
    if (aux > max) max = aux;
  }

  cout << max << "\n";
  return 0;
}
