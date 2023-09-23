// https://codeforces.com/problemset/problem/1873/D

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (; t > 0; --t) {
        int n, k, res = 0;
        string s;
        cin >> n >> k >> s;

        for (int i = 0; i < n; i++) {
            if (s[i] == 'B') {
                res++;
                i += k-1;
            }
        }

        cout << res << '\n';
    }

    return 0;
}