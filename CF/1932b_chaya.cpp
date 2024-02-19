// https://codeforces.com/problemset/problem/1932/B

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, a, year;
    cin >> t;

    for (; t > 0; --t) {
        cin >> n >> year;

        for (int i = 1; i < n; i++) {
            cin >> a;
            year = a * (year / a + 1);
        }

        cout << year << '\n';
    }

    return 0;
}