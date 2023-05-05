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
int dp[1005];
int A[MX]; 
int B[MX];
vector<int> v, v1;
int main() {
	call;
	int K; cin >> K;
	int sum = 0;
	int res = 0;
	for (int i = 1; i <= K; i++) {
		cin >> per[i];
		dp[i] = per[i];
	}
	for (int i = 1; i <= K; i++) {
		for (int j = 1; j <= i;j++) {
			if (per[i] > per[j]) {
				dp[i] = max(dp[i], dp[j] + per[i]);
			}
			sum = max(sum, dp[i]);
		}
	}
	cout << sum;

}