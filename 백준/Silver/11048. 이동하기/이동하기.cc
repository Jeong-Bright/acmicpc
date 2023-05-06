#include <bits/stdc++.h>
using namespace std;
#define call ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MX 2000005
#define MAX 0x7ffffff
#define endl '\n'
typedef long long ll;
int per[1005];
int board[1002][1002];
int dp[5003][1005];
int A[MX]; 
int B[MX];
vector<int> v, v1;
int main() {
	call;
	int T, X;
	cin >> T >> X;
	for (int i = 1; i <= T; i++) {
		for (int j = 1; j <= X; j++) {
			cin >> board[i][j];
		}
	}


	for (int i = 1; i <= T; i++) {
		for (int j = 1; j <= X; j++) {
			int result = max(max(dp[i - 1][j], dp[i][j - 1]), dp[i - 1][j - 1]);
			dp[i][j] = result + board[i][j];
		}
	}

	cout << dp[T][X];

}