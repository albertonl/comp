/* https://www.hackerrank.com/contests/primer-concurso-clasificatorio-oie-2018/challenges/girona-temps-de-flors */

// Warning: this doesn't work and I don't know why

#include <bits/stdc++.h>

using namespace std;

struct vis {
    bool visited;
    int w;
    int t;
};

vector<vector<pair<int,int>>> adj;
vector<int> t;

pair<int,int> dfsHelper(int s, int maxw, int addw, int addt, vector<vis> (&visited)) {
    // cout << s << " {" << visited[s].visited << ", " << visited[s].w << ", " << visited[s].t << "}\n";
    if (visited[s].visited) return make_pair(visited[s].w + addw, visited[s].t + addt);
    visited[s] = {true, visited[s].w + addw, visited[s].t + t[s] + addt};

    vector<pair<int,int>> options;
    for (unsigned int u = 0; u < adj[s].size(); u++) {
        options.push_back(dfsHelper(adj[s][u].first, maxw, adj[s][u].second, t[s], visited));
    }

    sort(options.rbegin(), options.rend(), [](const pair<int,int>& a, const pair<int,int>& b) -> bool {
        return a.second < b.second;
    });

    for (auto o : options) {
        if (o.first > maxw) continue;
        return o;
    }

    return make_pair(0,0);
}

pair<int,int> dfs(int i, int n, int s) {
    vector<vis> visited(n);

    return dfsHelper(i, s, 0, 0, visited);
}

int main () {
    int n, s;

    while (cin >> n >> s) {
        t.reserve(n);
        adj.reserve(n);
        for (int i = 0; i < n; i++) cin >> t[i];

        for (int i = 0; i < n; i++) {
            int w;
            for (int j = 0; j < n; j++) {
                cin >> w;
                if (w == 0) continue;
                else adj[i].push_back({j,w});
            }
        }

        // for (int i = 0; i < n; i++) {
        //     for (auto j : adj[i]) {
        //         cout << "{" << j.first << "," << j.second << "} ";
        //     }
        //     cout << endl;
        // }
        // cout << endl;

        vector<pair<int,int>> options;
        for (int i = 0; i < n; i++) options.push_back(dfs(i, n, s));

        sort(options.rbegin(), options.rend(), [](const pair<int,int>& a, const pair<int,int>& b) -> bool {
            return a.second < b.second;
        });
        // cout << "\n";
        for (auto o : options) {
            // cout << "{" << o.first << ", " << o.second << "}\n";
            if (o.first > s) continue;
            cout << o.second << "\n";
            break;
        }

        adj.clear();
        t.clear();
    }

    return 0;
}
