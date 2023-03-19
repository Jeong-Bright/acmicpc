#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int num; int sum = 0;
	int k = 100;

	for (int i = 0; i < 7; i++) {
		cin >> num;

			if (num % 2 != 0) {
				sum += num;
				if (num < k) k = num;
			}
			
	}

	if (sum == 0) cout << "-1";
	else cout << sum << '\n' << k;




}