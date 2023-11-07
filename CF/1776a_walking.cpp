// https://codeforces.com/problemset/problem/1776/A

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (; t > 0; --t) {
        int n, maxd = 0, count = 0;
        cin >> n;

        vector<int> a(n+2, 0);
        a[n+1] = 1440;

        for (int i = 1; i <= n; i++) cin >> a[i];
        for (int i = 1; i < n+2; i++) {
            if (a[i]-a[i-1] >= 120) {
                if (a[i]-a[i-1] > maxd) maxd = a[i]-a[i-1];
                count++;
            }
        }

        cout << ((count >= 2 || (count == 1 && maxd >= 240)) ? "YES\n" : "NO\n");
    }

    return 0;
}