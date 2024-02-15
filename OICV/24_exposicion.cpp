// OICV 2024 - Problema 3: Exposición de pinturas

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define x first
#define y second
using namespace std;

typedef pair<int, int> pi;
typedef pair<pi, pi> ppi;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, perim = 0;
    ppi intersect;
    cin >> n;

    vector<ppi> squares(n);

    for (int i = 0; i < n; i++) {
        cin >> squares[i].first.x >> squares[i].first.y;
        cin >> squares[i].second.x >> squares[i].second.y;
    }

    // El perímetro total de la figura será la suma de los perímetros de todos
    // los rectángulos menos la suma de los perímetros de todas las
    // intersecciones entre rectángulos. Como 0 <= n <= 10, es perfectamente
    // viable una solución O(n2).

    for (int i = 0; i < n; i++) {
        // Sumamos al perímetro total el perímetro del rectángulo actual, R_i.
        perim += 2 * (
            (squares[i].second.x - squares[i].first.x) +
            (squares[i].second.y - squares[i].first.y));
        
        // Restamos el perímetro de la intesección de R_i con el resto de
        // rectángulos R_j.
        for (int j = n-1; j > i; --j) {
            intersect.first.x = max(squares[i].first.x, squares[j].first.x);
            intersect.first.y = max(squares[i].first.y, squares[j].first.y);
            intersect.second.x = min(squares[i].second.x, squares[j].second.x);
            intersect.second.y = min(squares[i].second.y, squares[j].second.y);

            if (intersect.first.x < intersect.second.x &&
                intersect.first.y < intersect.second.y) {
                // Los rectángulos se intersectan
                perim -= 2 * (
                    (intersect.second.x - intersect.first.x) +
                    (intersect.second.y - intersect.first.y));
            }
        }
    }

    cout << perim << '\n';
    return 0;
}
