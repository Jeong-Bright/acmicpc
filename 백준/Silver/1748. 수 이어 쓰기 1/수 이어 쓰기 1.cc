#include <bits/stdc++.h>
using namespace std;
int main() {

	int N;
	cin >> N;
	int M = 0;
	int sum = 0;

	while (M < N) {

		sum += N - M;
		M *= 10;
		M += 9;

	}

	cout << sum;
}