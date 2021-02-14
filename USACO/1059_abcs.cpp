/* http://www.usaco.org/index.php?page=viewproblem2&cpid=1059 */

#include <bits/stdc++.h>
using namespace std;

int main () {
	vector<int> v;
	int aux;

	while (cin >> aux) v.push_back(aux);
	sort(v.begin(), v.end());

	cout << v[0] << " " << v[1] << " " << v[v.size()-1] - v[0] - v[1] << endl;
	return 0;
}
