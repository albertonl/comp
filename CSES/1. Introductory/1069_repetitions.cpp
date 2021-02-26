/* https://cses.fi/problemset/task/1069 */

#include <bits/stdc++.h>

using namespace std;

int main () {
  char prev = ' ', curr;
  int count = 0, max = 0;

  while (cin >> curr) {
    if (curr != prev) {
      if (count > max) max = count;
      count = 1;
      prev = curr;
    } else count++;
  }

  if (max == 0 || count > max) max = count;
  cout << max << "\n";

  return 0;
}
