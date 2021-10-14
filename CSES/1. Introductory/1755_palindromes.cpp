// https://cses.fi/problemset/task/1755

#include <bits/stdc++.h>
#pragma GCC optimize("O2")
typedef long long ll;
using namespace std;

int main() {
  string s; cin >> s;
  int odd = 0, oddLocation = -1, aux;
  vector<int> v(26, 0);
  for (int i = 0; i < s.length(); i++) {
    v[s[i] - 'A']++;
  }

  for (int i = 0; i < v.size() && odd < 2; i++) {
    if (v[i] % 2 != 0) {
      odd++;
      if (odd == 1) oddLocation = i;
    }
  }

  if (odd < 2) {
    for (int i = 0; i < v.size(); i++) {
      if (i == oddLocation) continue;
      aux = v[i] / 2;
      for (int j = 0; j < aux; j++) {
        cout << static_cast<char>(i + 65);
      }
    }

    if (odd > 0) {
      for (int i = 0; i < v[oddLocation]; i++) {
        cout << static_cast<char>(oddLocation + 65);
      }
    }

    for (int i = v.size() - 1; i >= 0; i--) {
      if (i == oddLocation) continue;
      aux = v[i] / 2;
      for (int j = 0; j < aux; j++) {
        cout << static_cast<char>(i + 65);
      }
    }

    cout << "\n";
  } else cout << "NO SOLUTION\n";
}
