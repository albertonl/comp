/* https://cses.fi/problemset/task/1192 */

#include <bits/stdc++.h>

using namespace std;

using vvb = vector<vector<bool>>;

void dfs(vvb& room, int i, int j, int n, int m) {
  room[i][j] = false;
  pair<int,int> dirs[4] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

  for (int t = 0; t < 4; t++) {
    int _i = i + dirs[t].first;
    int _j = j + dirs[t].second;

    if (_i < 0 || _i >= n || _j < 0 || _j >= m) continue;
    if (room[_i][_j]) dfs(room, _i, _j, n, m);
  }
}

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n, m; cin >> n >> m;
  vvb room(n);
  int count = 0;
  char aux;

  for (int i = 0; i < n; i++) {
    room[i].reserve(m);
    fill(room[i].begin(), room[i].end(), false);
    for (int j = 0; j < m; j++) {
      cin >> aux;
      if (aux == '.') {
        room[i][j] = true;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (room[i][j]) {
        count++;
        dfs(room, i, j, n, m);
      }
    }
  }

  cout << count << "\n";

  return 0;
}
