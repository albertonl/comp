// https://cses.fi/problemset/task/1668

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

int dfs(int idx, int cnum, vector<vector<int>>& adj, vector<bool>& visited, vector<int>& color) {
    if (visited[idx]) return 0;
    visited[idx] = true;
    color[idx] = cnum;

    for (int i = 0; i < adj[idx].size(); i++) {
        if (color[adj[idx][i]] != 0 && color[adj[idx][i]] == cnum) {
            return 1;
        }
    }

    for (int i = 0; i < adj[idx].size(); i++) {
        if (dfs(adj[idx][i], ((cnum == 1) ? 2 : 1), adj, visited, color)) {
            return 1;
        }
    }

    return 0;
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n+1);
    vector<bool> visited(n+1, false);
    vector<int> color(n+1, 0);

    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    for (int i = 1; i <= n; i++) {
        if (visited[i]) continue;
        if (dfs(i, 1, adj, visited, color)) {
            cout << "IMPOSSIBLE\n";
            return 0;
        }
    }

    for (int i = 1; i <= n; i++) {
        if (i > 1) cout << ' ';
        cout << color[i];
    }

    cout << '\n';
    return 0;
}