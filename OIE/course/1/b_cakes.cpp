#include <bits/stdc++.h>
#pragma GCC optimize("O3")
typedef long long ll;
using namespace std;

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  ll a, b, c, d;
  cin >> a >> b >> c >> d;

  if (max(c,d) >= max(a,b) && min(c,d) >= min(a,b)) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }

  return 0;
}
