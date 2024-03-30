// https://codeforces.com/contest/1950/problem/A

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, a, b, c;
    cin >> t;

    while (t--) {
        cin >> a >> b >> c;

        if (a < b && b < c) cout << "STAIR\n";
        else if (a < b && b > c) cout << "PEAK\n";
        else cout << "NONE\n";
    }

    return 0;
}