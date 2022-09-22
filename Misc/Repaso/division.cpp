#include <bits/stdc++.h>
#pragma GCC optimize("O3")
typedef long long ll;
using namespace std;

ll division(ll a, ll b);

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  ll a, b;
  cin >> a >> b;

  cout << division(a, b) << "\n";
  return 0;
}

ll division(ll a, ll b) {
  ll d = b, count = 1;
  while (d+b <= a) {
    count++;
    d += b;
  }

  return count;
}
