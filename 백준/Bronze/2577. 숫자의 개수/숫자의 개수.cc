#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, b, c;

	cin >> a >> b >> c;
	int sum = a * b * c;
	string sum1 = to_string(sum);
	for (char k = '0'; k <= '9'; k++) {
		int cnt = 0;
		
		for(auto c : sum1)
		if (k == c)
			cnt++;

		cout << cnt << '\n';

	}




}