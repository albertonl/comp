#include <bits/stdc++.h>
#pragma GCC optimize("O3")
typedef long long ll;
using namespace std;

int main () {
  // IMPORTANTE NO PONER:
  // ios_base::sync_with_stdio(false);
  // cin.tie(nullptr);

  int n;
  cin >> n;

  vector<string> ciudades(n);
  for (ll i = 0; i < n; i++) {
    cin >> ciudades[i];
  }

  vector<vector<ll>> destinos(n, vector<ll>(n, 0));
  for (ll i = 0; i < n; i++) {
    for (ll j = 0; j < n; j++) {
      cin >> destinos[i][j];
    }
  }

  string ciudad_in;
  cout << "Dime ciudad: ";
  cin >> ciudad_in;

  ll idx = [n, ciudades](string ciudad_in) -> ll {
    for (ll i = 0; i < n; i++) {
      if (ciudades[i] == ciudad_in) return i;
    }

    return -1;
  }(ciudad_in);

  cout << "Puedes ir con AVE a los siguientes destinos:\n";
  for (ll i = 0; i < n; i++) {
    if (destinos[idx][i] > 0) cout << ciudades[i] << "\n";
  }

  return 0;
}
