#include <bits/stdc++.h>
#pragma GCC optimize("O3")
typedef long long ll;
using namespace std;

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  ll t;
  cin >> t;

  for (; t > 0; --t) {
    ll n, cost = 0;
    string t;
    cin >> n >> t;

    vector<bool> visited(n, false);
    for (ll i = 0; i < n; i++) {
      for (ll k = 1; k*(i+1) < n+1 && t[(k*(i+1))-1] == '0'; k++) {
        if (!visited[(k*(i+1))-1]) {
          cost += i+1;
          visited[(k*(i+1))-1] = true;
        }
      }
    }

    cout << cost << "\n";
  }

  return 0;
}
