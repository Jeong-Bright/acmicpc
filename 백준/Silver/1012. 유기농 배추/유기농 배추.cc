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
int dy[4] = { 0,1,0,-1 };
int n, m, k;
queue <pair<int, int>> Q;

void bfs(int x, int y) {
    vis[x][y] = 1;
    Q.push({ x,y });
    while (!Q.empty()) {
        auto cur = Q.front(); Q.pop();
        for (int dir = 0; dir < 4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if (vis[nx][ny] || board[nx][ny] != 1) continue;
            vis[nx][ny] = 1;
            Q.push({ nx, ny });
        }
    }
}

int main(void) {
    call;
    int t; cin >> t;
    while (t--) {
        cin >> m >> n >> k;
        int x, y;
        for (int i = 0; i < k; i++) {
            cin >> x >> y;
            board[y][x] = 1;
        }
        int area = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (board[i][j] ==1 && !vis[i][j]) {
                    bfs(i, j);
                    area++;
                }
                
            }
        }

        cout << area << endl;
        for (int i = 0; i < n; i++) {
            fill(board[i], board[i] + m, 0);
            fill(vis[i], vis[i] + m, 0);
        }
    }

}