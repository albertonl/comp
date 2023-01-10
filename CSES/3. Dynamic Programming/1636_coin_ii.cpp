#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define MOD 1000000007
typedef long long ll;
using namespace std;
 
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    ll n, x;
    cin >> n >> x;
 
    vector<ll> c(n);
    vector<ll> dp(x+1, 0);
 
    for (ll i = 0; i < n; i++) cin >> c[i];
 
    dp[0] = 1;
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j <= x; j++) {
            if (j-c[i] >= 0) {
                dp[j] += dp[j-c[i]];
                dp[j] %= MOD;
            }
        }
    }
 
    cout << dp[x] << "\n";
    return 0;
}