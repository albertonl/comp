// OICV 2024 - Problema 2: Con corazón

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int op, n, k, offset;
    cin >> op >> n >> k;
    offset = (k-1)/2; // definimos por comodidad

    vector<int> v(n);
    vector<int> suavizado(n, 0);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++) {
        if (op == 0 && (i < offset || i > n - 1 - offset)) {
            // Cuando op == 0, los elementos cuya media móvil excedería el
            // rango del vector mantienen su valor.
            suavizado[i] = v[i];
        } else {
            // En el resto de casos, realizamos la suma de los elementos de la
            // media teniendo cuidado de no salirnos del vector.
            for (int j = max(0, i-offset); j <= min(n-1, i+offset); j++) {
                suavizado[i] += v[j];
            }

            // Replicación de los elementos de los extremos
            if (i-offset < 0) suavizado[i] += (offset-i) * v[0];
            if (i+offset >= n) suavizado[i] += (i+offset-(n-1)) * v[n-1];

            // Es importante convertir uno de los términos de la división a
            // coma flotante para evitar truncamientos.
            suavizado[i] = round(suavizado[i] / (double)k);
        }

        cout << suavizado[i] << ' ';
    }

    cout << '\n';
    return 0;
}
