#include <bits/stdc++.h>
#pragma GCC optimize("O3")
typedef long long ll;
using namespace std;

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  ll n;
  cin >> n;

  while (n%2 == 0) {
    n /= 2;
  }

  if (n == 1) cout << "YES\n";
  else cout << "NO\n";

  return 0;
}
