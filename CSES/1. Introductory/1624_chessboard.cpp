#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;
typedef vector<bool> vb;
typedef vector<string> vs;

void solve(int f, int& count, vb& col, vb& diag1, vb& diag2, const vs& board) {
    if (f == 8) {
        count++;
        return;
    }
    
    for (int c = 0; c < 8; c++) {
        if (!(col[c] || diag1[f+c] || diag2[7-f+c] || board[f][c] == '*')) {
            col[c] = diag1[f+c] = diag2[7-f+c] = true;
            solve(f+1, count, col, diag1, diag2, board);
            col[c] = diag1[f+c] = diag2[7-f+c] = false;
        }
    }
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int count = 0;
    vs board(8);
    for (int i = 0; i < 8; i++) cin >> board[i];
    
    vb col(8, false), diag1(15, false), diag2(15, false);

    solve(0, count, col, diag1, diag2, board);
    cout << count << endl;
    return 0;
}