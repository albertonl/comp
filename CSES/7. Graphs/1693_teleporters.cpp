// https://cses.fi/problemset/task/1693/

#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, a, b;
    cin >> n >> m;
    vector<vector<int>> adj(n);
    vector<int> in_deg(n, 0);
    vector<int> out_deg(n, 0);

    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        adj[a-1].push_back(b-1);
        out_deg[a-1]++;
        in_deg[b-1]++;
    }

    if (in_deg[0] != out_deg[0]-1 || in_deg[n-1] != out_deg[n-1]+1) {
        cout << "IMPOSSIBLE\n";
        return 0;
    }

    for (int i = 1; i < n-1; i++) {
        if (in_deg[i] != out_deg[i]) {
            cout << "IMPOSSIBLE\n";
            return 0;
        }
    }
    
    stack<int> s;
    vector<int> path;
    s.push(0);

    while (!s.empty()) {
        int node = s.top();
        if (in_deg[node] == 0 && out_deg[node] == 0) {
            path.push_back(node+1);
            s.pop();
        } else {
            int node = s.top();
            s.push(adj[node][adj[node].size() - 1]);
            adj[node].pop_back();
            out_deg[node]--;
            in_deg[s.top()]--;
        }
    }

    if (path.size() != m+1) {
        cout << "IMPOSSIBLE\n";
    } else {
        for (int i = path.size() - 1; i >= 0; --i) {
            cout << path[i] << ((i) ? ' ' : '\n');
        }
    }

    return 0;
}