// https://codeforces.com/contest/1950/problem/D

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

void solve (int n, const vector<int>& values) {
    vector<int> prod;

    if (n == 0 || n == 1) {
        cout << "YES\n";
        return;
    }

    for (int i = 0; i < 31; i++) {
        if (n == values[i]) {
            cout << "YES\n";
            return;
        }

        if (n % values[i] == 0) prod.push_back(values[i]);
    }

    if (prod.empty()) {
        cout << "NO\n";
        return;
    }

    for (int i = 0; i < prod.size(); i++) {
        while (n % prod[i] == 0) n /= prod[i];
    }

    if (n != 1) cout << "NO\n";
    else cout << "YES\n";
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    const vector<int> values = {
        10, 11, 100, 101, 110, 111, 1000, 1001, 1010, 1011,
        1100, 1101, 1110, 1111, 10000, 10001, 10010, 10011,
        10100, 10101, 10110, 10111, 11000, 11001, 11010, 11011,
        11100, 11101, 11110, 11111, 1000000
    };

    int t, n;
    cin >> t;

    while (t--) {
        cin >> n;
        solve(n, values);
    }

    return 0;
}