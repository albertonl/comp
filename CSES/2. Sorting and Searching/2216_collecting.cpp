#include <bits/stdc++.h>
#pragma GCC optimize("O3")
typedef long long ll;
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, x, count = 1;
    cin >> n;

    vector<ll> pos(n+1);
    for (ll i = 1; i <= n; i++) {
        cin >> x;
        pos[x] = i;
    }

    for (ll i = 1; i < n; i++) {
        if (pos[i+1] < pos[i]) count++;
    }
    
    cout << count << "\n";
}