// https://codeforces.com/problemset/problem/1932/C

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (; t > 0; --t) {
        int n, m, l, r;
        string s;
        cin >> n >> m;

        vector<int> a(n);
        vector<int> out(n);

        for (int i = 0; i < n; i++) cin >> a[i];
        cin >> s;
        
        l = 0; r = n - 1;
        for (int i = 0; i < n-1; i++) {
            if (s[i] == 'L') l++;
            else r--;
        }

        out[n - 1] = a[r] % m;
        for (int i = n-2; i >= 0; i--) {
            if (s[i] == 'L') out[i] = out[i + 1] * a[--l] % m;
            else out[i] = out[i + 1] * a[++r] % m;
        }

        for (int i = 0; i < n; i++)
            cout << out[i] << ((i == n - 1) ? '\n' : ' ');
    }
}