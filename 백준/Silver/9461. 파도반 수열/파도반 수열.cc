#include <bits/stdc++.h>
#define call ios::sync_with_stdio(0); cin.tie(0);
#define MX 2000005
#define MAX 0x7ffffff
#define ll long long;
using namespace std;
long long P[MX];
int N;
int main() {
	int A;
	cin >> N;

	P[1] = 1;P[2] = 1;P[3] = 1;P[4] = 2;P[5] = 2;

	while (N--) {
		cin >> A;

			for (int i = 6; i <= A; i++) {
				P[i] = P[i - 1] + P[i - 5];
			}

			cout << P[A] << '\n';

	}


}