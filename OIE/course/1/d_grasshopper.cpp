#include <bits/stdc++.h>
#pragma GCC optimize("O3")
typedef long long ll;
using namespace std;

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  ll n;
  cin >> n;

  if (n%2 == 0) {
    cout << n/2 + 2*(n/2) << "\n";
  } else {
    cout << (n-1)/2 + 2*((n-1)/2) + 1 << "\n";
  }

  return 0;
}
