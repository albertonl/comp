// https://codeforces.com/problemset/problem/546/A

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
typedef long long ll;
using namespace std;

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll k, n, w, p = 0;
  cin >> k >> n >> w;

  for (int i = 1; i <= w; i++) {
    p += i * k;
  }

  if (p <= n) cout << 0 << "\n";
  else cout << p - n << "\n";
  return 0;
}
