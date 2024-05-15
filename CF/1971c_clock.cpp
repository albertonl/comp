// https://codeforces.com/problemset/problem/1971/C

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, a, b, c, d;
    cin >> t;

    while (t--) {
        cin >> a >> b >> c >> d;
        if (a > b) swap(a, b);
        if (c > d) swap(c, d);

        if (c > a && c < b && d > a && d < b) cout << "NO\n";
        else if ((c > a && c < b) || (d > a && d < b)) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}