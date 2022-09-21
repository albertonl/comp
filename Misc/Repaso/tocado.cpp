#include <bits/stdc++.h>
#pragma GCC optimize("O3")
typedef long long ll;
using namespace std;

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  for (; t > 0; --t) {
    int n, total = 0;
    cin >> n;

    vector<ll> v(n);
    vector<bool> p(n, 0);
    for (ll i = 0; i < n; i++) {
      cin >> v[i];
    }

    if (n < 2) cout << "0\n";
    else {
      for (ll i = 1; i < n; i++) {
        ll j = i-1;
        while (v[j] > v[i] && !p[j]) {
          p[j] = true;
          total++;
          j--;
        }
      }

      cout << total << "\n";
    }
  }

  return 0;
}
