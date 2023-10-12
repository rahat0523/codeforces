#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, x;
	cin >> n >> x;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
    cin >> v[i]; 
	map<int, int> a;
	for (int i = 0; i < n; i++) {
		if (a.count(x - v[i])) {
			cout << i + 1 << " " << a[x - v[i]] <<"\n";
			return 0;
		}
		a[v[i]] = i + 1;
	}
	cout << "IMPOSSIBLE\n";
}