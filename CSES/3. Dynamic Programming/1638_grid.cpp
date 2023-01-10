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

    char cell;
    vector<vector<ll>> dp(n, vector<ll>(n, 0));
    dp[0][0] = 1;
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            cin >> cell;
            if (i == 0 && j == 0 && cell == '*') {
                cout << "0\n";
                return 0;
            }
            if (cell == '.') {
                if (i != 0) dp[i][j] += dp[i-1][j];
                if (j != 0) dp[i][j] += dp[i][j-1];
                dp[i][j] %= MOD;
            }
        }
    }

    cout << dp[n-1][n-1] << "\n";
    return 0;
}