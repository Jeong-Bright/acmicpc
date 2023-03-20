#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n,y;
	int a[1005];
	cin >> n >> y;

	for (int i = 0; i < n; i++) {
		cin >> a[i];

	}

	sort(a, a + n, greater<int>());

	cout << a[y - 1];

}