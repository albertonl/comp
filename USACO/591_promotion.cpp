// http://www.usaco.org/index.php?page=viewproblem2&cpid=591

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
typedef long long ll;
using namespace std;

int main () {
  freopen("promote.in", "r", stdin);
  freopen("promote.out", "w", stdout);
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<pair<ll, ll>> v(4);
  vector<ll> p;
  for (int i = 0; i < 4; i++) {
    cin >> v[i].first >> v[i].second;
  }

  for (int i = v.size()-1; i >= 1; i--) {
    if (v[i].second > v[i].first) {
      p.push_back(v[i].second - v[i].first);
      v[i-1].first -= v[i].second - v[i].first;
    } else {
      p.push_back(0);
    }
  }

  for (ll i = p.size() - 1; i >= 0; i--) {
    cout << p[i] << "\n";
  }

  return 0;
}
