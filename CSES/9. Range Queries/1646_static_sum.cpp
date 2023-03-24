// https://cses.fi/problemset/task/1646

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
typedef long long ll;
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, q;
    cin >> n >> q;

    vector<ll> sum(n+1, 0);
    for (ll i = 1; i <= n; i++) {
        ll x;
        cin >> x;
        sum[i] = sum[i-1] + x;
    }

    for (ll i = 0; i < q; i++) {
        ll a, b;
        cin >> a >> b;
        cout << sum[b] - sum[a-1] << '\n'; 
    }

    return 0;
}