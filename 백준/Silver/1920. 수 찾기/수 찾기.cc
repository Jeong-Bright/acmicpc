#include <bits/stdc++.h>
#define call ios::sync_with_stdio(0); cin.tie(0);
#define MX 2000005
#define MAX 0x7ffffff
using namespace std;
int A[MX];
int N;
int bin(int T) {
	int st = 0;
	int en = N - 1;

	while (st <= en) {
		int md = (st + en) / 2;
		if (A[md] > T) { en = md - 1; }
		else if (A[md] < T) { st = md + 1; }
		else if (A[md] == T) return 1;


	}
	return 0;
}

int main() {
	call;
	int M,k; cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	sort(A, A + N);
	cin >> M;
	while (M--) {
		cin >> k;
		cout << bin(k) << '\n';
	}

}
