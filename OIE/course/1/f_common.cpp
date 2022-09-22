#include <bits/stdc++.h>
#pragma GCC optimize("O3")
typedef long long ll;
using namespace std;

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  ll n;
  cin >> n;

  vector<ll> a(n);
  vector<ll> b(n);

  for (ll i = 0; i < n; i++) cin >> a[i];
  for (ll i = 0; i < n; i++) cin >> b[i];

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  for (ll i = 0; i < n; i++) {
    if (binary_search(b.begin(), b.end(), a[i])) {
      cout << "YES\n";
      return 0;
    }
  }

  cout << "NO\n";
  return 0;
}
