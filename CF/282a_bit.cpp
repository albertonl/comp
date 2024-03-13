// https://codeforces.com/problemset/problem/282/A

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x = 0;
    string s;
    cin >> n;

    while (n--) {
        cin >> s;
        if (s[1] == '+') x++; // The second character will always be either '+'
        else x--;             // or '-', depending on the operation.
    }

    cout << x << '\n';
    return 0;
}