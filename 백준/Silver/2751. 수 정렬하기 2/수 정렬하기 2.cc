#include <bits/stdc++.h>
using namespace std;



int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	vector<int> v(10000005);

	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}

	sort(v.begin(), v.begin() + N );

	for (auto i = 0; i < N; i++) {
		cout << v[i] << '\n';
	}


}