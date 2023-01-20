#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;

	vector<int> h(n), s(n);
	vector<vector<int>> dp(n+1, vector<int>(x+1, 0));

	for (int i = 0; i < n; i++) cin >> h[i];
	for (int i = 0; i < n; i++) cin >> s[i];

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= x; j++) {
			dp[i][j] = dp[i-1][j];
			if (j >= h[i-1]) dp[i][j] = max(dp[i][j], dp[i-1][j-h[i-1]]+s[i-1]);
		}
	}

	cout << dp[n][x] << "\n";
	return 0;
}
