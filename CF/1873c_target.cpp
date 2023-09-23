// https://codeforces.com/problemset/problem/1873/C

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (; t > 0; --t) {
        int res = 0;
        vector<string> v(10);
        for (int i = 0; i < 10; i++) cin >> v[i];
        for (int pt = 1; pt <= 5; pt++) {
            for (int i = pt-1; i < 10-pt+1; i++) {
                for (int j = pt-1; j < 10-pt+1; j++) {
                    if (v[i][j] == 'X') res++;
                }
            }
        }

        cout << res << '\n';
    }

    return 0;
}