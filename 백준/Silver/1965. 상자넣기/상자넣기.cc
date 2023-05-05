#include <bits/stdc++.h>
using namespace std;
#define call ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MX 2000005
#define MAX 0x7ffffff
#define endl '\n'
#define X first
#define Y second
typedef long long ll;
int DP[1005];
int cp[1005][1005];
int A[MX]; 
int B[MX];
vector<int> v, v1;
int main() {
	call;
	int K; cin >> K;
	int sum = 0;
	int res = 0;
	for (int i = 1; i <= K; i++) {
		cin >> DP[i];
		cp[0][i] = 1;
	}
	for (int i =1; i <= K; i++) {
		cp[i][i] = 1;
		for (int j = i; j <= K; j++) {
			if (DP[i] < DP[j]) {
				cp[i][j] = max(cp[i][i] + 1, cp[i - 1][j]);
			}
			else
				cp[i][j] = cp[i - 1][j];
			sum = max(sum, cp[i][j]);
		}
	}
	cout << sum;
	


}