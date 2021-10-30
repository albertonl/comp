// http://www.usaco.org/index.php?page=viewproblem2&cpid=987

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
typedef long long ll;
using namespace std;

int main () {
  freopen("word.in", "r", stdin);
  freopen("word.out", "w", stdout);
  int n, k, len = 0;
  string s;
  cin >> n >> k;

  for (int i = 0; i < n; i++) {
    cin >> s;
    len += s.length();

    if (len > k) {
      cout << "\n" << s;
      len = s.length();
    } else {
      if (i) cout << " ";
      cout << s;
    }
  }

  return 0;
}
