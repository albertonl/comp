// https://codeforces.com/problemset/problem/158/B

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

int main () {
    int n, aux, res = 0;
    cin >> n;

    vector<int> s(5, 0);
    for (int i = 0; i < n; i++) {
        cin >> aux;
        s[aux]++;
    }

    // cout << s[4] << " groups of 4\n";
    res += s[4];
    s[4] = 0;
    
    aux = min(s[3], s[1]);
    res += aux;
    s[3] -= aux;
    s[1] -= aux;

    aux = s[2] / 2;
    res += aux;
    s[2] -= aux * 2;

    if (s[2] > 0) {
        res++;
        s[2]--;
        s[1] -= min(2, s[1]);
    }

    while (s[1] > 0) {
        res++;
        s[1] -= min(4, s[1]);
    }

    res += accumulate(s.begin(), s.end(), 0);
    cout << res << '\n';
    return 0;
}
