#include <bits/stdc++.h>
#pragma GCC optimize("O3")
typedef long long ll;
using namespace std;

typedef vector<double> vd;
typedef vector<vd> vvd;

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int m, n;
  cin >> m >> n;

  vvd v(m+2, vd(n+2, -1.0));
  vvd w(m, vd(n));
  for (ll i = 1; i <= m; i++) {
    for (ll j = 1; j <= n; j++) {
      cin >> v[i][j];
    }
  }

  for (ll i = 1; i <= m; i++) {
    for (ll j = 1; j <= n; j++) {
      if (v[i][j] == -1.0) {
        double sum = 0.0;
        ll count = 0;
        for (ll _i = i-1; _i <= i+1; _i++) {
          for (ll _j = j-1; _j <= j+1; _j++) {
            if (v[_i][_j] != -1.0) {
              sum += v[_i][_j];
              count++;
            }
          }
        }

        w[i-1][j-1] = sum / count;
      } else w[i-1][j-1] = v[i][j];
    }
  }

  for (ll i = 0; i < m; i++) {
    for (ll j = 0; j < n; j++) {
      cout << fixed << setprecision(1) << w[i][j] << ((j == n-1) ? "\n" : " ");
    }
  }

  return 0;
}
