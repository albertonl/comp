// https://codeforces.com/contest/1950/problem/E

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, mismatches;
    string s, sub;
    cin >> t;

    while (t--) {
        cin >> n >> s;

        for (int i = 1; i <= n; i++) {
            // cout << "i value: " << i << endl;
            if (n % i == 0) { // i is a divisor of the length
                mismatches = 0;
                for (int j = i; j < n && mismatches < 2; j++) {
                    if (s[j] != s[j % i]) mismatches++;
                    // cout << "Comparing " << j << " and " << j%i << ": " << s[j] << ":" << s[i] << endl;
                }

                if (mismatches < 2) {
                    cout << i << '\n';
                    break;
                } else {
                    mismatches = 0;
                    for (int j = n-i; j >= 0 && mismatches < 2; j--) {
                        if (s[j] != s[n-i+(j%i)]) mismatches++;
                    }

                    if (mismatches < 2) {
                        cout << i << '\n';
                        break;
                    }
                }
            }
        }
    }

    return 0;
}