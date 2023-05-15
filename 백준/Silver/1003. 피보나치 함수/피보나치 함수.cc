#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define call ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MX 2000005
#define MAX 0x7ffffff
#define endl '\n'
typedef long long ll;
char board[1005][1005];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
int temp, T;

int main() {
	call;
	int temp; cin >> temp;

	ll DP[2][45];
	DP[0][0] = 1;
	DP[1][0] = 0;
	DP[0][1] = 0;
	DP[1][1] = 1;
	while (temp--) {
		int T; cin >> T;
		for (int i = 2; i <= T;i++) {
			fill(DP[0]+2, DP[0] + T, 0);
			fill(DP[1]+2, DP[1] + T, 0);
		}
		for (int i = 2; i <= T; i++) {
			DP[0][i] = DP[0][i - 1] + DP[0][i - 2];
			DP[1][i] = DP[1][i - 1] + DP[1][i - 2];
		}

		cout << DP[0][T] << ' ' << DP[1][T] << endl;
	}
}