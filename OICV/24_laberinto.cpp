// OICV 2024 - Problema 4: Laberinto aritmético

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define x first
#define y second
using namespace std;

typedef pair<int, int> pi;
typedef enum { NADA = 0, ARRIBA, ABAJO, IZQUIERDA, DERECHA } Direccion;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, res;
    pi pos;
    Direccion dirActual;
    string cad = "";

    cin >> n >> m >> pos.y >> pos.x;

    vector<string> v(n);

    // La matriz dirs almacena la dirección en la que hemos atravesado cada
    // casilla por última vez, para comprobar si existen ciclos.
    vector<vector<Direccion>> dirs(n, vector<Direccion>(m, NADA));

    for (int i = 0; i < n; i++) cin >> v[i];

    while (v[pos.y][pos.x] != '@') {
        if (dirs[pos.y][pos.x] == dirActual) {
            cout << "SIN SOLUCION\n"; // Existe un ciclo
            return 0;
        }

        dirs[pos.y][pos.x] = dirActual;

        switch (v[pos.y][pos.x]) {
            case 'v':
                dirActual = ABAJO;
                break;
            case '^':
                dirActual = ARRIBA;
                break;
            case '<':
                dirActual = IZQUIERDA;
                break;
            case '>':
                dirActual = DERECHA;
                break;
            case '0':
            case '@':
                break;
            default:
                cad += v[pos.y][pos.x];
        }

        switch (dirActual) {
            case ABAJO: pos.y++; break;
            case ARRIBA: pos.y--; break;
            case IZQUIERDA: pos.x--; break;
            case DERECHA: pos.x++; break;
            case NADA:
            default:
                cout << "SIN SOLUCION\n"; // Por si acaso
                return 0;
        }

        if (pos.y < 0 || pos.y >= n || pos.x < 0 || pos.x >= m) {
            cout << "SIN SOLUCION\n"; // Fuera de límites
            return 0;
        }
    }

    if (cad[0] < '1' || cad[0] > '9') {
        cout << "SIN SOLUCION\n"; // Secuencia no comienza por un dígito
        return 0;
    }

    res = cad[0] - '0';

    for (int i = 1; i < cad.length(); i++) {
        if ((i % 2 == 0 && (cad[i] == '+' || cad[i] == '-' || cad[i] == '*' || cad[i] == '/' || cad[i] == '=')) ||
            (i % 2 == 1 && cad[i] >= '1' && cad[i] <= '9')) {
            // No se cumple alternancia de dígitos y operadores
            cout << "SIN SOLUCION\n";
            return 0;
        }

        if (i % 2 == 0) {
            switch (cad[i-1]) {
                case '+':
                    res += cad[i] - '0';
                    break;
                case '-':
                    res -= cad[i] - '0';
                    break;
                case '*':
                    res *= cad[i] - '0';
                    break;
                case '/':
                    res /= cad[i] - '0';
                    break;
                case '=':
                    if (i < cad.length()-1) break;
                default:
                    cout << "SIN SOLUCION\n"; // Por si acaso
                    return 0;
            }
        }
    }

    if (cad[cad.length()-1] != '=') {
        cout << "SIN SOLUCION\n"; // Secuencia no termina por un igual
    } else {
        cout << res << '\n';
    }
    
    return 0;
}
