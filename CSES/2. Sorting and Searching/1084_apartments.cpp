#include <bits/stdc++.h>
#pragma GCC optimize("O3")
typedef long long ll;
using namespace std;

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  ll n, m, k, i, j, count;
  cin >> n >> m >> k;

  vector<ll> app(n);
  vector<ll> apt(m);

  for (ll i = 0; i < n; i++) cin >> app[i];
  for (ll i = 0; i < m; i++) cin >> apt[i];

  sort(app.rbegin(), app.rend());
  sort(apt.rbegin(), apt.rend());

  i = j = count = 0;
  while (i < apt.size() && j < app.size()) {
    if (apt[i] <= app[j]+k && apt[i] >= app[j]-k) {
      count++;
      i++;
      j++;
    } else if (apt[i] > app[j]+k) i++;
    else j++;
  }

  cout << count << "\n";
  return 0;
}
