#include <bits/stdc++.h>
#pragma GCC optimize("O3")
typedef long long ll;
using namespace std;

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  ll n, pits = 0;
  cin >> n;

  vector<ll> v(n);
  for (ll i = 0; i < n; i++) cin >> v[i];

  for (ll i = 1; i < n-1; i++) {
    if (v[i] < min(v[i-1], v[i+1])) pits++;
  }

  cout << pits << "\n";
  return 0;
}
