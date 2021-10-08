// https://cses.fi/problemset/task/1092/

#include <bits/stdc++.h>
#pragma GCC optimize("O2")
typedef long long ll;
using namespace std;

int main() {
  ll n; cin >> n;
  vector<ll> a, b;
  if (((n*(n+1))/2) % 2 == 0) {
    cout << "YES\n";
    if (n % 4 == 0) {
      for (int i = 1; i <= n; i+=4) {
        a.push_back(i);
        a.push_back(i+3);
        b.push_back(i+1);
        b.push_back(i+2);
      }
    } else if (n % 4 == 3) {
      a = {1,2};
      b = {3};
      for (int i = 4; i <= n; i+=4) {
        a.push_back(i);
        a.push_back(i+3);
        b.push_back(i+1);
        b.push_back(i+2);
      }
    }

    cout << a.size() << "\n";
    for (int i = 0; i < a.size()-1; i++) cout << a[i] << " ";
    cout << a[a.size()-1] << "\n";

    cout << b.size() << "\n";
    for (int i = 0; i < b.size()-1; i++) cout << b[i] << " ";
    cout << b[b.size()-1] << "\n";
  } else {
    cout << "NO\n";
  }
  return 0;
}
