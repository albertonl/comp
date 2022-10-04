#include <bits/stdc++.h>
#pragma GCC optimize("O3")
typedef long long ll;
using namespace std;

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  ll t;
  cin >> t;

  for (; t > 0; --t) {
    string s;
    ll ncount = 0;
    cin >> s;
    for (ll i = 0; i < s.length() && ncount < 2; i++) {
      if (s[i] == 'N') ncount++;
    }

    if (ncount == 1) cout << "NO\n";
    else cout << "YES\n";
  }

  return 0;
}
