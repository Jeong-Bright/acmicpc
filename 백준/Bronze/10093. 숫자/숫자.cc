#include <bits/stdc++.h>
using namespace std;

void swap(int& a,  int& b) {

	long long temp;

	temp = a;
	a = b;
	b = temp;


}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long  A, B;
	cin >> A >> B;

	if (A > B) {
		swap(B, A);
	}

	if (A != B) {
		cout << B - A - 1 << '\n';
		for (long long j = A + 1; j < B; j++) {
			cout << j << ' ';
		}
	}
	else cout << 0 << '\n';

}