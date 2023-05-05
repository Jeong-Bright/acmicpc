#include <bits/stdc++.h>
using namespace std;
#define call ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MX 2000005
#define MAX 0x7ffffff
#define endl '\n'
#define X first
#define Y second
typedef long long ll;
int A[MX]; 
int B[MX];
vector<int> v, v1;
int main() {
	call;
	int N, M;
	int x, y;
	cin >> N;
	for (int i = 1; i <= N; i++) cin >> A[i];
	cin >> M;
	for (int i = 1; i <= N; i++) {
		A[i] = A[i] + A[i - 1];
		
	}
	while (M--) {
		cin >> x >> y;
		cout << A[y] - A[x - 1] << '\n';

	}
}
