#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define call ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
vector<int> v;
vector<int> adj[100005];
int p[100005];
int T, X;
string board[105];
int dist[105][105];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
int cnt = 0, area = 0, num = 0;
void bfs() {
          for(int i = 0 ; i < T ;i++)  fill(dist[i], dist[i] + X, -1);
            queue<pair<int, int>> q;
            q.push({ 0,0 });
            dist[0][0] = 0;
            while (!q.empty()) {
                cnt++;
                pair<int, int> cur = q.front();
                q.pop();
                for (int dir = 0; dir < 4; dir++) {
                    int nx = dx[dir] + cur.first;
                    int ny = dy[dir] + cur.second;
                    if (nx >= T || nx < 0 || ny >= X || ny < 0) continue;
                    if (dist[nx][ny] >= 0 || board[nx][ny] != '1') continue;
                    q.push({ nx, ny });
                    dist[nx][ny] = dist[cur.first][cur.second] + 1;
                }
            }
}


int main() {
    call;
    cin >> T >> X;
    for (int i = 0; i < T; i++)
            cin >> board[i];
    
    bfs();
    cout << dist[T - 1][X - 1] + 1;

}