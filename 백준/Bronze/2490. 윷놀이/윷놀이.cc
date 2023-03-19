#include <bits/stdc++.h>
using namespace std;



int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int A[5][6];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
		cin >> A[i][j];
		}
	}


	for (int i = 0; i < 3; i++) {
		int sum = 0;
		for (int j = 0; j < 4; j++) {
			if (A[i][j] == 1) sum++;
		}
		if (sum == 0) cout << "D" << '\n';
		if (sum == 1) cout << "C" << '\n';
		if (sum == 2) cout << "B" << '\n';
		if (sum == 3) cout << "A" << '\n';
		if (sum == 4) cout << "E" << '\n';
		
	}




}