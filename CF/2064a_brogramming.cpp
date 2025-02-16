// https://codeforces.com/contest/2064/problem/A

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, res;
    string s;
    cin >> t;

    while (t--) {
        res = 0;
        cin >> n >> s;

        for (int i = 0; i < n-1; i++) {
            if (s[i] != s[i+1]) res++;
        }

        if (s[0] == '1') res++;
        cout << res << '\n';
    }

    return 0;
}
