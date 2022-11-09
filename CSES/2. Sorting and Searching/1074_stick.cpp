#include <bits/stdc++.h>
#pragma GCC optimize("O3")
typedef long long ll;
using namespace std;

ll cost(ll n, const vector<ll>& v) {
    ll c = 0;
    for (ll i = 0; i < v.size(); i++) {
        c += llabs(v[i]-n);
    }

    return c;
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    
    vector<ll> v(n);
    for (ll i = 0; i < n; i++) cin >> v[i];

    sort(v.begin(), v.end());

    if (n == 1) cout << "0\n";
    else cout << min(cost(v[(n-1)/2], v), cost(v[(n-1)/2+1], v)) << "\n";
    return 0;
}