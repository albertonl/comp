/* https://www.hackerrank.com/contests/segundo-concurso-clasificatorio-oie-2019/challenges/fortuna-francis */

#include <bits/stdc++.h>

using namespace std;

int main () {
  int n; cin >> n;
  tuple<int, char, char, char> min;
  tuple<int, char, char, char> curr;
  string aux;

  for (int i = 0; i < n; i++) {
    cin >> aux;
    curr[0] = stoi(aux.substr(0, 4));
    curr[1] = aux[4];
    curr[2] = aux[5];
    curr[3] = aux[6];

    if (curr[1] < min[1]) {
      min = curr;
    } else if (curr[1] == min[1]) {
      if (curr[2] < min[2]) {
        min = curr;
      } else if (curr[2] == min[2]) {
        if (curr[3] < min[3]) {
          min = curr;
        } else if (curr[3] == min[3]) {
          if (curr[0] < min[0]) min = curr;
        }
      }
    }
  }

  cout << min[0] << min[1] << min[2] << min[3] << "\n";

  return 0;
}
