// https://codeforces.com/contest/1950/problem/C

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, h, m;
    char s[5];
    scanf("%d", &t);

    while (t--) {
        scanf(" %s", s);
        
        h = (s[0] - '0') * 10 + (s[1] - '0');
        m = (s[3] - '0') * 10 + (s[4] - '0');

        if (h > 0) printf("%02d:%02d %s\n", (h > 12) ? h-12 : h, m, (h < 12) ? "AM" : "PM");
        else printf("12:%02d AM\n", m);
    }

    return 0;
}