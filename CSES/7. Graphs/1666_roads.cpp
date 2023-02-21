#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define pb(x) push_back(x)
#define f first
#define s second
using namespace std;

void dfs(vector<vector<int>>& adj, vector<bool>& visited, int idx) {
    if (visited[idx]) return;

    visited[idx] = true;
    for (int i = 0; i < adj[idx].size(); i++) {
        dfs(adj, visited, adj[idx][i]);
    }

    return;
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, res = 0;
    cin >> n >> m;

    vector<vector<int>> adj(n);
    vector<bool> visited(n, false);
    vector<pair<int, int>> roads;
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        adj[x-1].pb(y-1);
        adj[y-1].pb(x-1);
    }

    for (int i = 0; i < n; i++) {
        if (visited[i]) continue;

        if (res > 0) roads.pb(make_pair(i, i+1));
        res++;
        dfs(adj, visited, i);
    }

    cout << res-1 << '\n';
    for (int i = 0; i < roads.size(); i++) {
        cout << roads[i].f << ' ' << roads[i].s << '\n';
    }
    return 0;
}