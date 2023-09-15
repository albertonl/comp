// https://www.hackerrank.com/contests/oifem-iii-clasificatorio-fase-1/challenges/el-juego-de-joan/problem

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define MAXSIZE 100001
typedef long long ll;
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;

    ll a[n], dp[MAXSIZE] = {0};
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] < MAXSIZE) dp[a[i]] = 1;
    }

    for (ll i = 1; i < MAXSIZE; i++) {
        if (!dp[i]) {
            cout << i << "\n";
            return 0;
        }

        for (ll j = 0; j < n; j++) {
            if (i + a[j] < MAXSIZE && dp[i] < k) {
                if (dp[i+a[j]]) dp[i+a[j]] = min(dp[i+a[j]], dp[i]+1);
                else dp[i + a[j]] = dp[i] + 1;
            }
        }
    }

    return 0;
}