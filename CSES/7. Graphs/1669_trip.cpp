// https://cses.fi/problemset/task/1669

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

int dfs(int idx, int prev, vector<vector<int>>& adj, vector<bool>& visited, vector<int>& path) {
    if (visited[idx]) return 0;
    visited[idx] = true;

    for (int i = 0; i < adj[idx].size(); i++) {
        if(adj[idx][i] != prev) {
            if (visited[adj[idx][i]]) {
                path = {adj[idx][i], idx};
                return 1;
            } else {
                int x = dfs(adj[idx][i], idx, adj, visited, path);
                if (x == 1) {
                    path.push_back(idx);
                    if (path[0] == path[path.size()-1]) return 2;
                }
                if (x) return x;
            }
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
    vector<int> path;

    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;

        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            if (dfs(i, 0, adj, visited, path)) {
                reverse(path.begin(), path.end());
                cout << path.size() << '\n';
                for (int j = 0; j < path.size(); j++) {
                    if (j > 0) cout << ' ';
                    cout << path[j];
                }

                cout << '\n';
                return 0;
            }
        }
    }

    cout << "IMPOSSIBLE\n";
    return 0;
}