// https://codeforces.com/contest/1950/problem/B

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n;
    cin >> t;

    while (t--) {
        cin >> n;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 2; j++) {
                for (int k = 0; k < n; k++) {
                    for (int l = 0; l < 2; l++) {
                        if (i % 2 == k % 2) cout << '#';
                        else cout << '.';
                    }
                }

                cout << '\n';
            }
        }
    }
    
    return 0;
}