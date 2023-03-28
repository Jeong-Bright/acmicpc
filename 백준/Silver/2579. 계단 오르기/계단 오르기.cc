#include <bits/stdc++.h>
#define call ios::sync_with_stdio(0); cin.tie(0);
#define MX 2000005
#define MAX 0x7ffffff
int N,T;
int D[305][3]; int S[100005];
using namespace std;
int main() {

	call;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> S[i];
	}
	if (N == 1) { cout << S[1]; return 0; }

	D[1][1] = S[1];
	D[1][2] = 0;
	D[2][1] = S[2];
	D[2][2] = S[1] + S[2];


	for (int i = 1; i <= N; i++) {
		D[i][1] = max(D[i - 2][1], D[i - 2][2]) + S[i];
		D[i][2] = D[i - 1][1] + S[i];

	}

	cout << max(D[N][1], D[N][2]);
}