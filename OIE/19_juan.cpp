/* https://www.hackerrank.com/contests/segundo-concurso-clasificatorio-oie-2019/challenges/el-vuelo-de-luis */

#include <bits/stdc++.h>

using namespace std;

int main () {
  int casos; cin >> casos;
  for (; casos > 0; casos--) {
    int n, aux; cin >> n;
    vector<int> p(n, 0);

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < 3; j++) {
        cin >> aux;
        p[i] += aux;
      }
    }

    pair<int, int> min = {0, p[0]};
    for (int i = 1; i < n; i++) {
      if (p[i] < min.second) {
        min.first = i;
        min.second = p[i];
      }
    }

    cout << min.first + 1 << "\n";
  }

  return 0;
}
