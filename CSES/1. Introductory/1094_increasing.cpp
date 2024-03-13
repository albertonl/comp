/* https://cses.fi/problemset/task/1094 */

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int n, prev, curr;
  long long count = 0; // Important! Otherwise it will overflow.
  cin >> n >> prev;

  while (--n) {
    cin >> curr;

    if (curr < prev) count += prev - curr;
    else prev = curr;
  }

  cout << count << "\n";
  return 0;
}
