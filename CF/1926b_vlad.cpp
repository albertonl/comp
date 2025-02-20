// https://codeforces.com/contest/1926/problem/B

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n;
    bool found;
    cin >> t;

    while (t--) {
        cin >> n;
        vector<string> v(n);
        found = false;

        for (int i = 0; i < n; i++) cin >> v[i];
        for (int i = 0; i < n && !found; i++) {
            for (int j = 0; j < n && !found; j++) {
                if (v[i][j] == '1') {
                    cout << ((v[i][j+1] == '1' && v[i+1][j] == '1') ?
                        "SQUARE\n" : "TRIANGLE\n");
                    found = true;
                }
            }
        }
    }

    return 0;
}