// https://open.kattis.com/problems/barcelona

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, aux;
    cin >> n >> k;

    for (int i = 1; i <= n; i++) {
        cin >> aux;
        if (aux == k) {
            if (i == 1) cout << "fyrst\n";
            else if (i == 2) cout << "naestfyrst\n";
            else cout << i << " fyrst\n";

            return 0;
        }
    }

    return 0;
}
