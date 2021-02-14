/* https://www.hackerrank.com/contests/primer-concurso-clasificatorio-oie-2019/challenges/islas-y-montanas/ */

// Warning: this code only yields a 60% score.

#include <bits/stdc++.h>

using namespace std;

int main () {
  int n, k;
  while (cin >> n >> k) {
    int a[n];
    int m[k];
    int counter = 0;
    bool active = false;

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> m[i];

    for (int h : m) {
      counter = 0;
      active = false;

      for (int x : a) {
        if (x > h && !active) {
          counter++;
          active = true;
        } else if (x <= h) {
          active = false;
        }
      }

      cout << counter;
      if (h == m[sizeof(m)/sizeof(m[0]-1)]) cout << "\n";
      else cout << " ";
    }
  }
}
