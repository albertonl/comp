#include <bits/stdc++.h>
#pragma GCC optimize("O3")
typedef long long ll;
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, res = 0;
    cin >> n;
    
    vector<ll> v(n);
    for (ll i = 0; i < n; i++) cin >> v[i];

    unordered_map<ll, ll> idx;
    for (ll i = 0, j = 0; i < n; i++) {
        if (idx[v[i]] > j) j = idx[v[i]];
        
        res = max(res, i-j+1);
        idx[v[i]] = i+1;
    }

    cout << res << "\n";
    return 0;
}