/* https://www.hackerrank.com/contests/primer-concurso-clasificatorio-oie-2019/challenges/palabras-1 */

#include <bits/stdc++.h>

using namespace std;

int main () {
  int n;
  while (cin >> n) {
    string a, b;
    cin >> a >> b;

    replace(a.begin(), a.end(), '?', 'a');
    replace(b.begin(), b.end(), '?', 'z');

    if (a < b) cout << "si\n";
    else cout << "no\n";
  }

  return 0;
}
