/* https://cses.fi/problemset/task/1071 */

#include <bits/stdc++.h>

using namespace std;

int main () {
  long long t, y, x, res = 0; cin >> t;

  for (; t > 0; t--) {
    cin >> y >> x;

    if (y >= x) {
      if (y % 2 == 0) {
        res = y * y - (x - 1);
      } else {
        res = y * y - (y - 1) - (y - x);
      }
    } else {
      if (x % 2 != 0) {
        res = x * x - (y - 1);
      } else {
        res = x * x - (x - 1) - (x - y);
      }
    }

    cout << res << "\n";
  }
  return 0;
}
