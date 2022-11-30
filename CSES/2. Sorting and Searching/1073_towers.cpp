#include <bits/stdc++.h>
#pragma GCC optimize("O3")
typedef long long ll;
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, x;
    cin >> n;

    vector<ll> towers;
    for (ll i = 0; i < n; i++) {
        cin >> x;

        auto it = lower_bound(towers.begin(), towers.end(), x+1);
        if (it != towers.end()) {
            *it = x;
            
            if (it != towers.begin()) {
                while (*it < *(it-1)) swap(*it, *(it-1));
            }
        } else {
            towers.push_back(x);
        }
    }

    cout << towers.size() << "\n";
    return 0;
}