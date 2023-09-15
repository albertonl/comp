// OIE 2023: Asientos Privilegiados

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    for (; t > 0; --t) {
        int f, a, n;
        cin >> f >> a >> n;

        if (n % a == 0) {
            if (a == 1) cout << "AMBOS\n";
            else if ((n/a) % 2 == 0) cout << "PASILLO\n";
            else cout << "VENTANA\n";
        } else if (n % a == 1) {
            if ((n/a) % 2 == 0) cout << "VENTANA\n";
            else cout << "PASILLO\n";
        }
        else cout << ":(\n";
    }
}