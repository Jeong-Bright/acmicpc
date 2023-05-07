#include <bits/stdc++.h>
using namespace std;
#define call ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MX 2000005
#define MAX 0x7ffffff
#define endl '\n'
typedef long long ll;
int cnt[MX];
int weight[MX];
int dp[1005][100005];
int A[MX]; 
int B[MX];
vector<int> v, v1;
int main() {
	call;
	int T,X; cin >> T >> X;
	for (int i = 1; i <= T; i++) {
		cin >> cnt[i] >> weight[i];
	}

	for (int i = 1; i <= T;i++) {
		for (int j = 1; j <= X; j++) {
			if (cnt[i] <= j) {
				dp[i][j] = max(dp[i - 1][j], dp[i-1][j - cnt[i]] + weight[i]);
			}
			else
				dp[i][j] = dp[i - 1][j];	

		}
	}
	cout << dp[T][X];
}
