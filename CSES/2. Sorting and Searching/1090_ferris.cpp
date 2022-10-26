#include <bits/stdc++.h>
#pragma GCC optimize("O3")
typedef long long ll;
using namespace std;

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  ll n, x, count = 0;
  cin >> n >> x;

  vector<ll> p(n);
  for (ll i = 0; i < n; i++) cin >> p[i];

  sort(p.rbegin(), p.rend());
  ll i = 0, j = n-1;
  while (i <= j) {
    if (p[i] <= x) {
      count++;
      if (p[i]+p[j] <= x) {
        i++;
        j--;
      } else i++;
    } else i++;
  }

  cout << count << "\n";
  return 0;
}
