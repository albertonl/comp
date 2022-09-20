#include <bits/stdc++.h>
#pragma GCC optimize("O3")
typedef long long ll;
using namespace std;

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  freopen("in.txt", "r", stdin);

  string s;
  while (cin >> s) {
    for (ll i = 0; i < s.length()-2; i++) {
      if (s[i] != '.' && s[i+1] == '.' && s[i+2] == '.') {
        cout << s[i];
      }
    }

    cout << "\n";
  }

  return 0;
}
