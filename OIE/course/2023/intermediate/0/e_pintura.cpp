#include <bits/stdc++.h>
#pragma GCC optimize("O3")
typedef long long ll;
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m;
    cin >> n >> m;

    vector<vector<ll>> v(n, vector<ll>(m));
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            cin >> v[i][j];

            if (i > 0 && j > 0) {
                ll sum = v[i][j] + v[i-1][j-1] + v[i][j-1] + v[i-1][j];
                if (sum == 0 || sum == 4) {
                    cout << "UNORIGINAL\n";
                    return 0;
                }
            }
        }
    }

    cout << "ORIGINAL\n";
    return 0;
}