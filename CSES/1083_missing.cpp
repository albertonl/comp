#include <bits/stdc++.h>

using namespace std;

int main () {
  long long n; cin >> n;
  long long sum = 0;
  int curr;

  for (int i = 0; i < n-1; i++) {
    cin >> curr;
    sum += curr;
  }

  cout << n * (n + 1) / 2 - sum << "\n";

  return 0;
}
