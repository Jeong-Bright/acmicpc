#include <bits/stdc++.h>
using namespace std;
#define call ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MX 2000005
#define MAX 0x7ffffff
#define endl '\n'
#define X first
#define Y second
int A[MX];
int B[MX];

int binary_search(int t, int len) {

	int st = 0;
	int en = len-1;
	while (st <= en) {
		int mid = (st + en) / 2;
	    if (A[mid] < t) st = mid + 1;
		else if (A[mid] > t) en = mid - 1;
		else
			return 1;
	}
	return 0;
}

int main(void) {
	call;
	int N; cin >> N;

	for (int i = 0; i < N; i++) cin >> A[i];
	sort(A, A + N);
	int M; cin >> M;
	for (int i = 0; i < M; i++) cin >> B[i];

	for (int i = 0; i < M; i++) {
		cout << binary_search(B[i], N) << ' ';

	}

}