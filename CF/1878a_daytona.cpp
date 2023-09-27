#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    for (; t > 0; --t) {
        int n, k, aux;
        bool found = false;
        cin >> n >> k;

        for (int i = 0; i < n; i++) {
            cin >> aux;
            if (aux == k && !found) {
                cout << "YES\n";
                found = true;
            }
        }

        if (!found) cout << "NO\n";
    }

    return 0;
}