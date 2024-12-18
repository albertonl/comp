// https://codeforces.com/contest/2044/problem/D

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, nextInSequence = 1;
        cin >> n;

        vector<int> a(n);
        unordered_set<int> selected;
        for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0; i < n; i++) {
            if (selected.count(a[i])) {
                while (selected.count(nextInSequence)) nextInSequence++;
                cout << nextInSequence << ' ';
                selected.insert(nextInSequence);
            } else {
                cout << a[i] << ' ';
                selected.insert(a[i]);
            }
        }

        cout << '\n';
    }

    return 0;
}