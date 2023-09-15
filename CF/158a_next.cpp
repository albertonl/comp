// https://codeforces.com/problemset/problem/158/A

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, aux, min = 0;
    cin >> n >> k;

    for (int i = 1; i <= n; i++) {
        cin >> aux;
        if (aux == 0 || (i > k && aux < min)) {
            cout << i-1 << '\n';
            break;
        } else if (i == k) min = aux;
        
        if (i == n) cout << i << '\n';
    }

    return 0;
}