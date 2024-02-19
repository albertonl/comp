#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (; t > 0; --t) {
        int n, odds = 0;
        char trump;
        cin >> n >> trump;

        deque<string> v(2*n);
        map<char, int> counts;
        counts['C'] = counts['D'] = counts['H'] = counts['S'] = 0;

        for (int i = 0; i < 2*n; i++) {
            cin >> v[i];
            counts[v[i][1]]++;
        }

        for (const auto& [key, value] : counts) {
            if (key != trump && value % 2 == 1) odds++;
        }

        if (counts[trump] - odds < 0 || (counts[trump] - odds) % 2 == 1) {
            cout << "IMPOSSIBLE\n";
        } else {
            sort(v.begin(), v.end(), [trump](const string& a, const string& b) -> bool {
                if (a[1] == b[1]) return a[0] < b[0];
                if (a[1] == trump) return false;
                if (b[1] == trump) return true;
                return a[1] < b[1];
            });

            for (int i = 0; i < n; i++) {
                if (counts[v.front()[1]] > 1) {
                    counts[v.front()[1]] -= 2;
                    cout << v.front() << ' ';
                    v.pop_front();
                    cout << v.front() << '\n';
                    v.pop_front();
                } else {
                    cout << v.front() << ' ' << v.back() << '\n';
                    counts[v.front()[1]]--;
                    counts[trump]--;
                    v.pop_front();
                    v.pop_back();
                }
            }
        }
    }

    return 0;
}