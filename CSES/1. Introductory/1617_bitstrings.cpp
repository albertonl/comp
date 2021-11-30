// https://cses.fi/problemset/task/1617

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define MOD 1000000007
typedef long long ll;
using namespace std;

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  ll n, r = 1;
  cin >> n;

  for (ll i = 0; i < n; i++) {
    r *= 2;
    r %= MOD;
  }

  cout << r << "\n";
  return 0;
}
