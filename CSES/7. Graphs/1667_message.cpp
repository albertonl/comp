#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define pb(x) push_back(x)
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n+1);
    vector<int> visited(n+1, 0);

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        adj[x].pb(y);
        adj[y].pb(x);
    }

    queue<int> q;
    q.push(1);
    while (!q.empty()) {
        int x = q.front();
        q.pop();

        for (int i = 0; i < adj[x].size(); i++) {
            if (!visited[adj[x][i]]) {
                visited[adj[x][i]] = x;
                q.push(adj[x][i]);
            }
        }
    }

    if (!visited[n]) cout << "IMPOSSIBLE\n";
    else {
        vector<int> path;
        int x = n;
        path.pb(x);
        while (x != 1) {
            path.pb(visited[x]);
            x = visited[x];
        }

        reverse(path.begin(), path.end());
        cout << path.size() << "\n";
        for (int i = 0; i < path.size(); i++) {
            if (i > 0) cout << " ";
            cout << path[i];
        }

        cout << "\n";
    }
    return 0;
}