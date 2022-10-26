#include <bits/stdc++.h>
#pragma GCC optimize("O3")
typedef long long ll;
using namespace std;

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  ll n, aux;
  set<ll> s;
  cin >> n;

  while (n--) {
    cin >> aux;
    s.insert(aux);
  }

  cout << s.size() << "\n";
  return 0;
}
