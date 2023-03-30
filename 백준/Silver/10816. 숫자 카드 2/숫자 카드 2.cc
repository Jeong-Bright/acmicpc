#include <bits/stdc++.h>
#define call ios::sync_with_stdio(0); cin.tie(0);
#define MX 2000005
#define MAX 0x7ffffff
using namespace std;
int A[MX];
int N;

int low(int T, int L) {
	int st = 0;
	int en = L;
	while (st < en) {

		int md = (st + en) / 2;
		if (A[md] >= T) en = md;
		else st = md + 1;

	}
	return st;
	
}

int upper(int T, int L) {
	int st = 0;
	int en = L;
	while (st < en) {

		int md = (st + en) / 2;
		if (A[md] > T) en = md;
		else st = md + 1;

	}
	return st;


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
		cout <<upper(k,N) - low(k,N) << '\n';
	}

}
