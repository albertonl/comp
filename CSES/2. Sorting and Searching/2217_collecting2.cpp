#include <bits/stdc++.h>
#pragma GCC optimize("O3")
typedef long long ll;
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m, count = 1;
    cin >> n >> m;

    vector<ll> v(n+1);
    vector<ll> pos(n+1);

    for (ll i = 1; i <= n; i++) {
        cin >> v[i];
        pos[v[i]] = i;
    }

    for (ll i = 1; i < n; i++) {
        if (pos[i+1] < pos[i]) count++;
    }

    while(m--) {
        ll a, b;
        cin >> a >> b;
        swap(pos[v[a]], pos[v[b]]);
        swap(v[a], v[b]);

        if (v[a] > 1) {
            if (pos[v[a]] < pos[v[a]-1] && pos[v[b]] > pos[v[a]-1]) count--;
            else if (pos[v[a]] > pos[v[a]-1] && pos[v[b]] < pos[v[a]-1]) count++;
        } if (v[a] < n) {
            if (pos[v[a]+1] < pos[v[a]] && pos[v[a]+1] > pos[v[b]]) count--;
            else if (pos[v[a]+1] > pos[v[a]] && pos[v[a]+1] < pos[v[b]]) count++;
        } if (v[b] > 1) {
            if (pos[v[b]] < pos[v[b]-1] && pos[v[a]] > pos[v[b]-1]) count--;
            else if (pos[v[b]] > pos[v[b]-1] && pos[v[a]] < pos[v[b]-1]) count++;
        } if (v[b] < n) {
            if (pos[v[b]+1] < pos[v[b]] && pos[v[b]+1] > pos[v[a]]) count--;
            else if (pos[v[b]+1] > pos[v[b]] && pos[v[b]+1] < pos[v[a]]) count++;
        }
        
        cout << count << "\n";
    }

    return 0;
}