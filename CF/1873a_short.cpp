// https://codeforces.com/problemset/problem/1873/A

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (; t > 0; --t) {
        string s;
        cin >> s;

        if (s == "cab" || s == "bca") cout << "NO\n";
        else cout << "YES\n";
    }

    return 0;
}