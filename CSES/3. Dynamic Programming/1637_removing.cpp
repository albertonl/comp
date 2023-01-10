#include <bits/stdc++.h>
#pragma GCC optimize("O3")
typedef long long ll;
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, count = 0;
    cin >> n;

    while (n > 0) {
        n -= [](ll x) -> ll {
            ll md = 0;
            while (x > 0) {
                md = max(md, x%10);
                x/=10;
            }
            return md;
        }(n);
        count++;
    }

    cout << count << "\n";
    return 0;
}