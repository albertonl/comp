// https://codeforces.com/contest/2044/problem/C

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, m, a, b, c, total;
    cin >> t;

    while (t--) {
        cin >> m >> a >> b >> c;

        total = min(a, m);
        total += min(b, m);
        total += min(2 * m - total, c);

        cout << total << '\n';
    }

    return 0;
}