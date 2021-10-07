// https://cses.fi/problemset/task/1072/

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define FOR(i, x, y) for(ll i = x; i < y; i++)
typedef long long ll;
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll n; cin >> n;
  FOR(i, 1, n+1) {
    ll totalPositions = (i*i) * (i*i-1) / 2;
    ll attackPositions = 4 * (i-1) * (i-2);
    cout << totalPositions - attackPositions << "\n";
  }

  return 0;
}
