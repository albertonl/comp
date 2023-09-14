// https://codeforces.com/problemset/problem/1791/G1

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (; t > 0; --t) {
        int n, c;
        cin >> n >> c;

        vector<int> a(n);
        for (int i = 1; i <= n; i++) {
            cin >> a[i-1];
            a[i-1] += i;
        }

        sort(a.rbegin(), a.rend());
        
        int res = 0;
        while (c >= a[a.size()-1] && a.size() > 0) {
            c -= a[a.size()-1];
            a.pop_back();
            res++;
        }

        cout << res << '\n';
    }

    return 0;
}
