#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define MOD 1000000007
typedef long long ll;
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    vector<ll> dp(n+1, 0);
    for (ll i = 1; i <= 6; i++) dp[i] = 1;

    for (ll i = 2; i <= n; i++)
        for (ll j = (i-6 < 0) ? 0 : i-6; j < i; j++) {
            dp[i] += dp[j];
            dp[i] %= MOD;
        }

    cout << dp[n] << "\n";
    return 0;
}
