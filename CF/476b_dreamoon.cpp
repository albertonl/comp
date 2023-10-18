// https://codeforces.com/problemset/problem/476/B

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1, s2;
    int pos = 0;
    double res;
    cin >> s1 >> s2;

    vector<int> adj = {0};

    for (int i = 0; i < s1.length(); i++) {
        switch (s1[i]) {
            case '+':
                pos++;
                break;
            case '-':
                pos--;
                break;
        }
    }

    for (int i = 0; i < s2.length(); i++) {
        switch (s2[i]) {
            case '+':
                for (int j = 0; j < adj.size(); j++) adj[j]++;
                break;
            case '-':
                for (int j = 0; j < adj.size(); j++) adj[j]--;
                break;
            case '?':
                for (int j = 0; j < adj.size(); j++) adj[j]++;
                for (int j = adj.size()-1; j >= 0; j--) adj.push_back(adj[j]-2);
                break;
        }
    }

    res = (double)count(adj.begin(), adj.end(), pos) / adj.size();
    cout << fixed << setprecision(12) << res << '\n';
    return 0;
}