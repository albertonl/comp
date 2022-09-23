#include <bits/stdc++.h>
#pragma GCC optimize("O3")
typedef long long ll;
using namespace std;

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  ll n, m, count = 0;
  cin >> n;

  m = n/2;
  for (ll i = 1; i <= m; i++) {
    if (n%i == 0) count++;
  }

  cout << count << "\n";
  return 0;
}
