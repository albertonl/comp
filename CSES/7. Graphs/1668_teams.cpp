// https://cses.fi/problemset/task/1668

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define pb(x) push_back(x)
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> group(n+1, -1);
    vector<bool> visited(n+1, false);
    vector<vector<int>> adj(n+1);

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].pb(b);
        adj[b].pb(a);
    }

    for (int i = 1; i <= n; i++) {
        if (visited[i]) continue;
        queue<int> q;
        int it = 1;
        q.push(i);

        while (!q.empty()) {
            int x = q.front();
            q.pop();

            if (group[x] != -1) {
                cout << "IMPOSSIBLE\n";
                return 0;
            }

            if (visited[x]) continue;
            visited[x] = true;
            group[x] = it%2;
            it++;
            
            for (int j = 0; j < adj[x].size(); j++) {
                q.push(adj[x][j]);
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        if (i > 1) cout << " ";
        cout << group[i];
    }

    cout << "\n";
    return 0;
}