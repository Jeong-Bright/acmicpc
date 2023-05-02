#include <bits/stdc++.h>
using namespace std;
#define call ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MX 2000005
#define MAX 0x7ffffff
#define endl '\n'
#define X first
#define Y second
int board[502][502];
bool vis[502][502];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,- 1 };
int n, m, x;
queue<pair<int, int>> Q;

void bfs(int a, int b, int checkNum) {
	vis[a][b] = 1;
	Q.push({ a,b });
	while (!Q.empty()) {
		auto cur = Q.front();
		Q.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			if (nx < 0 || nx >= x || ny < 0 || ny >= x) continue;
			if (!vis[nx][ny] && board[nx][ny] > checkNum) {
				vis[nx][ny] = 1;
				Q.push({ nx,ny });
			}
		}
	}
}

int main(void) {
	call;
	cin >> x;
	int maxli = 0;
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < x; j++) {
			cin >> board[i][j];
			maxli = max(board[i][j], maxli);
			
		}
	}
	int res = 0;
	int mx = 0;
	int t = 0;
	while (maxli >= t) {
		for (int i = 0; i < x;i++) {
			fill(vis[i], vis[i] + x, false);
		}
		mx = 0;
		for (int i = 0; i < x;i++) {
			for (int j = 0; j < x; j++) {
				if (board[i][j] > t && !vis[i][j]) {
					bfs(i, j, t);
					mx++;
				}
			}
		}
		res = max(res, mx);
		
		t++;
	}
	cout << res;

			
			
			
		
	
}