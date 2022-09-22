#include <bits/stdc++.h>
#pragma GCC optimize("O3")
typedef long long ll;
using namespace std;

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  ll n;
  cin >> n;
  if (n != 0) {
    do {
      bool par = !(n%2);
      n /= 10;

      while (n > 0) {
        if (par == n%2) {
          par = !(n%2);
          n /= 10;
        } else {
          cout << "No es heterogéneo\n";
          n = -1;
        }
      }

      if (n != -1) {
        cout << "Es heterogéneo\n";
      }
      
      cin >> n;
    } while (n != 0);
  }

  cout << "Finaliza la ejecución\n";
  return 0;
}
