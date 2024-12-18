// https://codeforces.com/contest/2044/problem/B

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    string s;
    cin >> t;

    while (t--) {
        cin >> s;
        reverse(s.begin(), s.end());
        
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'p') s[i] = 'q';
            else if (s[i] == 'q') s[i] = 'p';
        }

        cout << s << '\n';
    }

    return 0;
}