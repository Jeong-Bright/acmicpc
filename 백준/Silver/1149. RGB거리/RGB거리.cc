#include <bits/stdc++.h>
#define call ios::sync_with_stdio(0); cin.tie(0);
#define MX 2000005
#define MAX 0x7ffffff
int D[1005][3]; int R[1005]; int G[1005]; int B[1005];
using namespace std;
int main() {
	call;
	int N; cin >> N;
	int sum = 0;
	for (int i = 1; i <= N;i++) {
		cin >> R[i] >> G[i] >> B[i];
	}

	D[1][0] = R[1];
	D[1][1] = G[1];
	D[1][2] = B[1];

	for (int i = 2; i <= N; i++) {
		D[i][0] = min(D[i - 1][1], D[i - 1][2]) + R[i];
		D[i][1] = min(D[i - 1][0], D[i - 1][2]) + G[i];
		D[i][2] = min(D[i - 1][0], D[i - 1][1]) + B[i];

	}
	cout << min({ D[N][0], D[N][1], D[N][2] });
	


}