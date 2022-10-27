#include <bits/stdc++.h>
#pragma GCC optimize("O3")
typedef long long ll;
using namespace std;

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  ll n, m, x;
  cin >> n >> m;

  multiset<ll> ms;
  for (ll i = 0; i < n; i++) {
    cin >> x;
    ms.insert(x);
  }

  for (ll i = 0; i < m; i++) {
    cin >> x;
    if (ms.upper_bound(x) == ms.begin()) cout << "-1\n";
    else {
      cout << *prev(ms.upper_bound(x)) << "\n";
      ms.erase(prev(ms.upper_bound(x)));
    }
  }

  return 0;
}
