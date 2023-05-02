#include <bits/stdc++.h>
using namespace std;
#define call ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MX 2000005
#define MAX 0x7ffffff
#define endl '\n'
#define X first
#define Y second
string board[102];
bool vis[502][502];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
int n, m, k , x;

void bfs(int z, int y) {
    queue <pair<int, int>> Q;
    Q.push({ z,y });
    vis[z][y] == 1;
    while (!Q.empty()) {
        auto cur = Q.front(); Q.pop();
        for (int dir = 0; dir < 4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx < 0 || nx >= x || ny < 0 || ny >= x) continue;
            if (vis[nx][ny] || board[nx][ny] != board[z][y]) continue;
            vis[nx][ny] = 1;
            Q.push({ nx, ny });
            
        }
    }
}


int main(void) {
    call;
    cin >> x;
    for (int i = 0; i < x; i++) {
        cin >> board[i];
    }
    int result = 0;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            if(!vis[i][j]){
                bfs(i, j);
                result++;
            }
        }
    }
    for (int i = 0; i < x;i++) {
        fill(vis[i], vis[i] + x,0);
    }
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            if (board[i][j] == 'R')
                board[i][j] = 'G';

        }
    }
    int result1 = 0;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            if (!vis[i][j]) {
                bfs(i, j);
                result1++;
            }

        }
    }
    cout << result << ' ' << result1;
}