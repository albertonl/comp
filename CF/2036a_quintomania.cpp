// https://codeforces.com/contest/2036/problem/A

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n;
    bool perfect;
    cin >> t;

    while (t--) {
        cin >> n;
        vector<int> v(n);
        perfect = true;

        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (i > 0 && (abs(v[i-1] - v[i]) != 5 && abs(v[i-1] - v[i]) != 7))
                perfect = false;
        }

        if (perfect) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}