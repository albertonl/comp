// https://cses.fi/problemset/task/1622

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
typedef long long ll;
using namespace std;

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  ll count = 0;
  string s;
  vector<string> p;
  cin >> s;

  sort(s.begin(), s.end());

  do {
    count++;
    p.push_back(s);
  } while (next_permutation(s.begin(), s.end()));

  cout << count << "\n";
  for (string x : p) {
    cout << x << "\n";
  }

  return 0;
}
