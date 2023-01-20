#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define MOD 1000000007
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> dp(n, vector<int>(m+1, 0));
    int x;
    cin >> x;
    
    if (x == 0) fill(dp[0].begin()+1, dp[0].end(), 1);
    else dp[0][x] = 1;

    for (int i = 1; i < n; i++) {
        cin >> x;

        if (x == 0) {
            for (int j = 1; j <= m; j++) {
                for (int k : {j-1, j, j+1}) {
                    dp[i][j] += dp[i-1][k];
                    dp[i][j] %= MOD;
                }
            }
        } else {
            for (int k : {x-1, x, x+1}) {
                dp[i][x] += dp[i-1][k];
                dp[i][x] %= MOD;
            }
        }
    }

    int ans = 0;
    for (int i = 1; i <= m; i++)
        (ans += dp[n-1][i]) %= MOD;
    
    cout << ans << "\n";
    return 0;
}