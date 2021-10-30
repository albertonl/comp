// https://codeforces.com/contest/231/problem/A

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
typedef long long ll;
using namespace std;

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, aux, s = 0, p = 0;
  cin >> n;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> aux;
      s += aux;
    }

    if (s >= 2) p++;
    s = 0;
  }

  cout << p << "\n";
  return 0;
}
