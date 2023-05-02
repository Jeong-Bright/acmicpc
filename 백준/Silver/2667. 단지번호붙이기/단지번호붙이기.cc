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
int n, m;
//void bfs(int x, int y) {
//
//}

int main(void) {
    call;
    int x;
    cin >> x;
    for (int j = 0; j < x; j++) {
        cin >> board[j];
    }
    int m = 0;
    vector<int> v;

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            if (board[i][j] == '0' || vis[i][j] == 1) continue;
            queue <pair<int, int>> Q;
            vis[i][j] = 1;
            Q.push({ i,j });
            int n = 1;
            m++;
            while (!Q.empty()) {
                auto cur = Q.front(); Q.pop();
                for (int dir = 0; dir < 4; dir++) {
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    if (nx < 0 || nx >= x || ny < 0 || ny >= x) continue;
                    if (board[nx][ny] == '0' || vis[nx][ny] ) continue;
                        Q.push({ nx, ny });
                        vis[nx][ny] = 1;
                        n++;
                }
            }
            v.push_back(n);
        }
    }
    
    cout << m << endl;
    std::sort(v.begin(), v.end());

    for (int i : v) cout << i << endl;

}