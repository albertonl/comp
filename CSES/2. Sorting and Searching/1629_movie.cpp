#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define f first
#define s second
typedef long long ll;
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, count = 1, curr = 0;
    cin >> n;

    vector<pair<int,int>> v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i].f >> v[i].s;
    }

    sort(v.begin(), v.end(), [](const pair<int,int>& a, const pair<int,int>& b) -> bool {
      if (a.s == b.s) return a.f < b.f;
      return a.s < b.s;
    });

    for (ll i = 1; i < n; i++) {
      if (v[i].f >= v[curr].s) {
        curr = i;
        count++;
      }
    }

    cout << count << "\n";
    return 0;
}
