#include <bits/stdc++.h>
#pragma GCC optimize("O3")
typedef long long ll;
using namespace std;

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  ll n, m, k;
  cin >> n >> m >> k;

  if (k%n == 0 || k%m == 0) cout << "YES\n";
  else cout << "NO\n";

  return 0;
}
