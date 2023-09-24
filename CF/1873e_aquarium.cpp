// https://codeforces.com/problemset/problem/1873/E

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;
typedef long long ll;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    for (; t > 0; --t) {
        ll n, x;
        cin >> n >> x;

        vector<ll> a(n);
        for (ll i = 0; i < n; i++) cin >> a[i];

        ll l = 0, r = 2e9+7, m, req;
        while (l < r) {
            m = l + (r-l+1)/2;
            req = 0;
            for (ll i = 0; i < n; i++) {
                req += max(0LL, m-a[i]);
            }

            if (req > x) r = m - 1;
            else l = m;
        }

        cout << l << '\n';
    }

    return 0;
}