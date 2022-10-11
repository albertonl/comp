#include <bits/stdc++.h>
#pragma GCC optimize("O3")
typedef long long ll;
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll x = 0, y = 0;
    string s;
    cin >> s;

    for (ll i = 0; i < s.length(); i++) {
        switch (s[i]) {
            case 'U':
                y++;
                break;
            case 'D':
                y--;
                break;
            case 'R':
                x++;
                break;
            case 'L':
                x--;
                break;
        }
    }

    cout << x << "\n" << y << "\n";
    return 0;
}