#include <bits/stdc++.h>
using namespace std;
#define call ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MX 2000005
#define MAX 0x7ffffff
#define endl '\n'
#define X first
#define Y second
typedef long long ll;
int per[1005];
int dp[5003][101];
int A[MX]; 
int B[MX];
vector<int> v, v1;
int main() {
	call;
	int sum = 0;
	ll N, K, W, V;
	cin >> K;
	for (int i = 0; i <= 9; i++) {
		dp[1][i] = 1;
	}

	for (int i = 1; i <= K; i++) {
		for (int j = 0; j <= 9; j++) {
			if (j == 0) {
				dp[i][0] = 1;
			}
			else
				dp[i][j] = dp[i][j - 1] + dp[i - 1][j];
			dp[i][j] %= 10007;
		}
	}


	int result = 0;
	for (int i = 0; i <= 9; i++) {
		result += dp[K][i];
	}
	result = result % 10007;
	cout << result;


}