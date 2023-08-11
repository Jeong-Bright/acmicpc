#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define call ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
vector<int> v;
vector<int> adj[100005];
int p[100005];
int T, X;
int board[505][505];
bool chk[505][505];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
int cnt = 0, area = 0, num = 0;
void bfs() {
    for (int i = 0; i < T; i++) {
        for (int j = 0; j < X; j++) {
            if (chk[i][j] || board[i][j] != 1) continue;
            area++;
            queue<pair<int, int>> q;
            q.push({ i,j });
            chk[i][j] = 1;
            cnt = 0;
            while (!q.empty()) {
                cnt++;
                pair<int, int> cur = q.front();
                q.pop();
                for (int dir = 0; dir < 4; dir++) {
                    int nx = dx[dir] + cur.first;
                    int ny = dy[dir] + cur.second;
                    if (nx >= T || nx < 0 || ny >= X || ny < 0) continue;
                    if (chk[nx][ny] || board[nx][ny] != 1) continue;
                    chk[nx][ny] = 1;
                    q.push({ nx, ny });
                }
            }
            num = max(num, cnt);
        }
    }
    
}


int main() {
    call;
    cin >> T >> X;
    for (int i = 0; i < T; i++)
        for (int j = 0; j < X; j++)
            cin >> board[i][j];
    
    bfs();
    cout << area << endl << num;

}