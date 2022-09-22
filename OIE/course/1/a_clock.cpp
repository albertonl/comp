#include <bits/stdc++.h>
#pragma GCC optimize("O3")
typedef long long ll;
using namespace std;

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  ll m;
  cin >> m;

  cout << m / 60 << "\n" << m%60 << "\n";
  return 0;
}
