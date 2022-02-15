// https://cses.fi/problemset/task/1618

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
typedef long long ll;
using namespace std;

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  ll n, r = 0, f = 5;
  cin >> n;

  n -= n % 5;
  while (n/f) {
    r += n/f;
    f *= 5;
  }

  cout << r << '\n';
  return 0;
}
