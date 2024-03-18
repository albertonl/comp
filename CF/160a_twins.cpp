// https://codeforces.com/problemset/problem/160/A

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, taken = 0, left, count = 0;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());
    left = accumulate(a.begin(), a.end(), 0);

    for (int i = a.size()-1; i >= 0 && left >= taken; i--) {
        taken += a[i];
        left -= a[i];
        count++;
    }

    cout << count << '\n';
    return 0;
}