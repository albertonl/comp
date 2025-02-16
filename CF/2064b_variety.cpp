// https://codeforces.com/contest/2064/problem/B

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n;
    cin >> t;

    while (t--) {
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        vector<int> appearances(n+1, 0);
        for (int i = 0; i < n; i++) appearances[a[i]]++;

        int l = 0, len = 0, maxl = 0, maxlen = 0;
        for (int i = 0; i < n; i++) {
            if (appearances[a[i]] == 1) {
                if (len == 0) l = i;
                len++;

                if (len > maxlen) {
                    maxlen = len;
                    maxl = l;
                }
            } else {
                len = 0;
            }
        }

        if (maxlen > 0) cout << maxl+1 << ' ' << maxl+maxlen << '\n';
        else cout << "0\n";
    }

    return 0;
}
