#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, max = 0, count = 0;
  cin >> n;

  n *= 2;
  vector<pair<int, bool>> v(n);
  for (int i = 0; i < n; i+=2) {
    cin >> v[i].first >> v[i+1].first;
    v[i].second = true;
    v[i+1].second = false;
  }

  sort(v.begin(), v.end(), [](const pair<int,bool>& a, const pair<int,bool>& b) -> bool {
    return a.first < b.first;
  });

  for (int i = 0; i < n; i++) {
    if (v[i].second) {
      if (++count > max) max = count;
    } else count--;
  }

  cout << max << "\n";
}
