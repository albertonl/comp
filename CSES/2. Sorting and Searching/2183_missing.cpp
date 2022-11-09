#include <bits/stdc++.h>
#pragma GCC optimize("O3")
typedef long long ll;
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, sum = 0;
    cin >> n;
    
    vector<ll> v(n);
    for (ll i = 0; i < n; i++) cin >> v[i];

    sort(v.begin(), v.end());
    for (ll i = 0; i < n; i++) {
        if(sum + 1 < v[i]) break;

        sum += v[i];
    }

    cout << sum + 1 << "\n";
    return 0;
}