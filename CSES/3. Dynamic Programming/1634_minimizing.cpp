#include <bits/stdc++.h>
#pragma GCC optimize("O3")
typedef long long ll;
using namespace std;

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  ll n, x;
  cin >> n >> x;

  vector<ll> c(n, 0);
  vector<ll> dp(x+1, -1);

  dp[0] = 0;
  for (ll i = 0; i < n; i++) cin >> c[i];

  for (ll i = 1; i <= x; i++) {
    for (ll j = 0; j < n; j++) {
      if (i-c[j] >= 0) {
        if (dp[i-c[j]] >= 0) {
          if (dp[i] == -1) dp[i] = dp[i-c[j]] + 1;
          else dp[i] = min(dp[i], dp[i-c[j]] + 1);
        }
      }
    }
  }

  cout << dp[x] << "\n";
  return 0;
}
