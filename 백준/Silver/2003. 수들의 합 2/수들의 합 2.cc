#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, M;
	int cnt = 0;
	int A[10005];
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	int x = 0;
	int y = 0;
	int sum = 0;

	for (int i = 0; i < N;i++) {
		while (sum < M) {
			if (y > N) break;
			sum += A[y++];
		}
		if (sum == M) cnt++;
		sum -= A[x];
		x++;
	}
	
	cout << cnt;
}