// OICV 2024 - Problema 5: Primos

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n % 2 == 0) return n == 2;

    // Solo necesitamos comprobar los impares
    for (int i = 3; i*i <= n; i += 2) {
        if (n % i == 0) return false;
    }

    return true;
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, k, count;
    cin >> t;

    for (; t > 0; --t) {
        cin >> n >> k;

        if (k == 0)
            cout << ((isPrime(n) ? "SI\n" : "NO\n"));
        else {
            count = 0;
            if (n < 2) { // Con esto nos ahorramos comprobar los pares
                cout << "2 ";
                count++;
            }

            for (int i = (n+1) + ((n+2) % 2); count < k; i += 2) {
                if (isPrime(i)) {
                    cout << i << ' ';
                    count++;
                }
            }

            cout << '\n';
        }
    }

    return 0;
}
