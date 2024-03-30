// https://codeforces.com/contest/1950/problem/F

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, a, b, c, height, curr, next;
    cin >> t;

    while (t--) {
        cin >> a >> b >> c;
        height = curr = 1;
        next = 0;

        if (a + 1 != c) cout << "-1\n";
        else if (a + b + c == 1) cout << "0\n";
        else {
            for (int i = 0; i < a+b; i++) {
                if (!curr) {
                    swap(next, curr);
                    height++;
                }

                curr--;
                next += (i < a) ? 2 : 1;
            }

            cout << height << '\n';
        }
    }

    return 0;
}