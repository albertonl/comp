// https://codeforces.com/problemset/problem/96/A

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    int len = 1;
    char prev;

    cin >> s;
    prev = s[0];

    for (int i = 1; i < s.length(); i++) {
        if (prev != s[i]) len = 1;
        else if (prev == s[i] && ++len >= 7) {
            cout << "YES\n";
            return 0;
        }

        prev = s[i];
    }

    cout << "NO\n";
    return 0;
}