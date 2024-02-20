// https://codeforces.com/problemset/problem/1932/E

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (; t > 0; --t) {
        int n;
        string s;
        cin >> n >> s;

        vector<int> dp(n+1, 0);

        for (int i = 1; i <= n; i++) dp[i] = dp[i-1] + (s[i-1] - '0');
        for (int i = n; i > 0; i--) {
            dp[i-1] += dp[i] / 10;
            dp[i] %= 10;
        }

        bool foundFirstDigit = false;
        for (int i = 0; i <= n; i++) {
            if (!foundFirstDigit && dp[i] > 0) foundFirstDigit = true;
            if (foundFirstDigit) cout << dp[i];
        }

        cout << '\n';
    }

    return 0;
}