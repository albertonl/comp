// https://codeforces.com/problemset/problem/1932/A

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, coins;
    string s;
    cin >> t;

    for (; t > 0; --t) {
        coins = 0;
        cin >> n >> s;
        
        for (int i = 1; i < n; i++) {
            if (s[i] == '*' && s[i-1] == '*') break;
            else if (s[i] == '@') coins++;
        }

        cout << coins << '\n';
    }

    return 0;
}