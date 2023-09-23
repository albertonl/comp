// https://codeforces.com/problemset/problem/1873/B

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (; t > 0; --t) {
        int n, min = 0, res = 1;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] < a[min]) min = i;
        }

        a[min]++;
        for (int i = 0; i < n; i++) {
            res *= a[i];
        }

        cout << res << '\n';
    }

    return 0;
}