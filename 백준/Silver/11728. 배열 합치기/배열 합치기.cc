#include <bits/stdc++.h>
#define call ios::sync_with_stdio(0); cin.tie(0);
#define MX 2000005
#define MAX 0x7ffffff
int N,M;
int A[1000005]; int B[10000005]; int C[MX];
using namespace std;
int main() {

	call;
	cin >> N >> M;
	for (int i = 0; i < N; i++) { cin >> A[i]; }
	for (int i = 0; i < M; i++) { cin >> B[i]; }

	int a = 0; int b = 0;
	for (int i = 0; i < N + M; i++) {

		if (a == N) C[i] = B[b++];
		else if (b == M) C[i] = A[a++];
		else if (A[a] <= B[b]) C[i] = A[a++];
		else C[i] = B[b++];
		

	}
	for (int i = 0; i < N + M; i++) cout << C[i] << ' ';

}