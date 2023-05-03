#include <bits/stdc++.h>
using namespace std;
#define call ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MX 2000005
#define MAX 0x7ffffff
#define endl '\n'
#define X first
#define Y second
typedef long long ll;
ll A[MX];
int B[MX];
long long N, M;;

int main(void) {
	call;
	cin >> N >> M;
	long long mx = 0;
	long long ans;
	for (int i = 0; i < N;i++) {
		cin >> A[i];
	}
	sort(A, A + N);
	ll st = 0;
	ll en = A[N-1];
	while (st <= en) {
		long long sum = 0;
		long long mid = (st + en) / 2;
		for (int i = 0; i < N; i++) {
			if(A[i] - mid > 0)
			sum += A[i] - mid;
		}
		if (sum >= M) {
			st = mid + 1;
			ans = mid;
		}

		else if (sum < M)
			en = mid - 1;
		

		if (sum == M) {
			break;
		}
	}
	cout << ans;
}