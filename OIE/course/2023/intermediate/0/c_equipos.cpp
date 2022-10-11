#include <bits/stdc++.h>
#pragma GCC optimize("O3")
typedef long long ll;
using namespace std;

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  ll n, x, y, count = 0;
  cin >> n >> x >> y;

  for (; n > 0; --n) {
    ll team;
    cin >> team;
    if (team >= x && team <= y) count++;
  }

  cout << count << "\n";
  return 0;
}
