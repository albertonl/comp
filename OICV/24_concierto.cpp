// OICV 2024 - Problema 1: Concierto

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

int solve(int sum, int pos, int n, int s) {
    int res = 0;

    if (pos < n) {
        for (int i = 1; i <= s; i++) {
            // Para el elemento en la posición 'pos', probamos todos los valores
            // entre 1 y s, y llamamos a la función sobre la posición siguiente.
            if (sum + i <= 12) {
                res += solve(sum+i, pos+1, n, s);
            }
        }
    } else if (sum == 12) res = 1; // Caso base

    return res;
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string grupo;
    int n, s;
    
    // Aunque no lo vayamos a usar, tenemos que leer el nombre del grupo
    // de la entrada.
    getline(cin, grupo); // El nombre del grupo pueden ser varias palabras!
    cin >> n >> s;

    if (n * s == 12) {
        // Por ejemplo, n = 3 y s = 4. En estos casos solo hay una
        // configuración posible.
        cout << "1\n";
    } else {
        cout << solve(0, 0, n, s) << '\n';
    }

    return 0;
}
