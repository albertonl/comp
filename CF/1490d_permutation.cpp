// https://codeforces.com/problemset/problem/1490/D

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
typedef long long ll;
using namespace std;

void f(ll l, ll r, ll cl, vector<ll>& a, vector<ll>& level) {
  if (l > r) return;

  ll max = l;
  for (ll i = l+1; i <= r; i++) {
    if (a[i] > a[max]) max = i;
  }

  level[max] = cl;
  f(l, max-1, cl+1, a, level);
  f(max+1, r, cl+1, a, level);
}

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  ll t;
  cin >> t;

  for (; t > 0; --t) {
    ll n;
    cin >> n;

    vector<ll> a(n);
    vector<ll> level(n);
    for (ll i = 0; i < n; i++) cin >> a[i];

    f(0, n-1, 0, a, level);

    for (ll i = 0; i < n; i++) {
      cout << level[i] << " ";
    }

    cout << "\n";
  }

  return 0;
}
