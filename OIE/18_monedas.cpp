/* https://www.hackerrank.com/contests/primer-concurso-clasificatorio-oie-2018/challenges/monedas */

#include <bits/stdc++.h>

using namespace std;

int main () {
  int casos; cin >> casos;
  for(; casos > 0; casos--) {
    int n; cin >> n;
    vector<int> m(n);

    for (int i = 0; i < n; i++) cin >> m[i];

    long long c = 1;
    sort(m.begin(), m.end());
    for (int i : m) {
      if (i > c) break;
      else c += i;
    }

    cout << c << "\n";
  }

  return 0;
}
