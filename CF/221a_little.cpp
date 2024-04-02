// https://codeforces.com/problemset/problem/221/A

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    cout << n << ((n == 1) ? '\n' : ' ');
    for (int i = 1; i < n; i++) cout << i << ((i == n-1) ? '\n' : ' ');

    return 0;
}