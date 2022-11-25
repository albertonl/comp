#include <bits/stdc++.h>
#pragma GCC optimize("O3")
typedef long long ll;
using namespace std;

ll solution (ll n, vector<ll>& v, ll pos, ll a, ll b) {
    if (pos == n) return llabs(a-b);
    return min(solution(n, v, pos+1, a+v[pos], b), solution(n, v, pos+1, a, b+v[pos]));
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    
    vector<ll> v(n);
    for (ll i = 0; i < n; i++) cin >> v[i];

    cout << solution(n, v, 0, 0, 0) << "\n";
    return 0;
}