// https://codeforces.com/contest/1943/problem/A

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, aux;
    vector<int> v;
    cin >> t;

    while (t--) {
        cin >> n;
        v.assign(n+1, 0);

        for (int i = 0; i < n; i++) {
            cin >> aux;
            v[aux]++;
        }

        int c = 0;
        for (int i = 0; i <= n; i++) {
            c += (v[i] == 1);
            if (c == 2 || !v[i]) {
                cout << i << '\n';
                break;
            }
        }
    }
    
    return 0;
}