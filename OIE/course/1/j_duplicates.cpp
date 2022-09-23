#include <bits/stdc++.h>
#pragma GCC optimize("O3")
typedef long long ll;
using namespace std;

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  ll n;
  cin >> n;

  vector<ll> v(n);
  set<ll> s;

  for (ll i = 0; i < n; i++) {
    cin >> v[i];
  }

  for (ll i = n-1; i >= 0; i--) {
    if (!s.count(v[i])) {
      s.insert(v[i]);
    } else {
      v.erase(v.begin() + i);
    }
  }

  cout << v.size() << "\n";
  for (ll i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }

  cout << "\n";
  return 0;
}
