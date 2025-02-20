// https://codeforces.com/contest/1926/problem/A

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, a;
    string s;
    cin >> t;

    while (t--) {
        cin >> s;
        a = 0;
        for (int i = 0; i < 5; i++)
            if (s[i] == 'A') a++;
        
        cout << ((a > 2) ? 'A' : 'B') << '\n';
    }

    return 0;
}