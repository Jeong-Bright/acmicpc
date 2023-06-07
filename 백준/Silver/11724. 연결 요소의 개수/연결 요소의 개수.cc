#include <bits/stdc++.h>
#define call ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MX 2000005
#define MAX 0x7ffffff
#define endl '\n'
using namespace std;
typedef long long ll;
int T;
int a, b;

bool vis[1000000];
vector<int> adj[1005];

int bfs(int num) { // 연결 그래프에서 순회

    for (int i = 1; i <= a; i++) {
        if (vis[i]) continue;
        num++;
        queue<int> q;
        q.push(i);
        vis[i] = 1;
        while (!q.empty()) {
            auto cur = q.front();
            q.pop();
            for (auto nxt : adj[cur]) {
                if (vis[nxt]) continue;
                q.push(nxt);
                vis[nxt] = true;
            }
        }

    }
    return num;

}
    int main() {
      
        call;

        cin >> a >> b;
        for (int i = 1; i <= b; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        cout << bfs(0);

    }