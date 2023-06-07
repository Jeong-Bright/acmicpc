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

void bfs(int v) {
    queue<int> q;
    q.push(v);
    vis[v] = 1;
    while (!q.empty()) {
        auto cur = q.front();
        q.pop();
        cout << cur << ' ';
        for (auto nxt : adj[cur]) {
            if (vis[nxt]) continue;
            q.push(nxt);
            vis[nxt] = true;
        }
    }

}
bool dfs_vis[100000];
void dfs(int v) {
    dfs_vis[v] = 1;
    cout << v << ' ';
    for (auto nxt : adj[v]) {
        if (dfs_vis[nxt]) continue;
        dfs(nxt);
    }

}

int main() {

    call;

    cin >> a >> b >> T;
    for (int i = 1; i <= b; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (int i = 1; i <= b; i++) {
        sort(adj[i].begin(), adj[i].end());
    }
    dfs(T);
    cout << endl;
    bfs(T);

}