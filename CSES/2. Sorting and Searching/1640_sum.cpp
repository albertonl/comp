#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define f first
#define s second
typedef long long ll;
using namespace std;

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  ll n, x;
  cin >> n >> x;

  vector<pair<ll,ll>> v(n);
  for (ll i = 0; i < n; i++) {
    cin >> v[i].f;
    v[i].s = i+1;
  }

  sort(v.begin(), v.end()); // sort ascending by key

  for (ll i = 0; i < n; i++) {
    ll a, b;
    if (x-v[i].f > v[i].f) {
      a = i+1;
      b = n-1;
    } else {
      a = 0;
      b = i-1;
    }
    while (a <= b) {
      ll k = (a+b)/2;
      if (v[k].f == x-v[i].f) {
        cout << v[i].s << " " << v[k].s << "\n";
        return 0;
      } else if (v[k].f > x-v[i].f) b = k-1;
      else a = k+1;
    }
  }

  cout << "IMPOSSIBLE\n";
  return 0;
}
