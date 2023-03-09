// Volteando Segmentos
// https://olimpiada-informatica.org/sites/default/files/OIE_2023_Clasificatorio_1_Enunciado_4.pdf

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (; t > 0; --t) {
        int n;
        char c;
        cin >> n;

        int l = 0, r = n, m = n/2;
        while (r-l > 1) {
            cout << "? " << m << endl;
            cin >> c;

            if (c == '=') {
                cout << "! " << m << endl;
                break;
            }
            
            switch (c) {
                case '<':
                    l = m; // remove left half
                    m = l+(r-l)/2;
                    break;
                case '>':
                    r = m-1; // remove right half
                    m = r-(r-l)/2;
                    break;
                case '-':
                    return 0;
            }
        }

        if (c != '=') cout << "! " << l << endl;
        cin >> c;

        if (c == '-') return 0;
    }

    return 0;
}