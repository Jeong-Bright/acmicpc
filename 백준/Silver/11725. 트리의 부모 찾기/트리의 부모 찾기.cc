#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n';
#define call ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
vector<int> v;
vector<int> adj[100005];
int p[100005];

void bfs(int root){
    queue<int> Q;
    Q.push(root);
    while (!Q.empty()){
        int cur = Q.front();
        Q.pop();
        for(int nxt : adj[cur]){
            if (p[cur] == nxt) continue;
            Q.push(nxt);
            p[nxt] = cur;
        }
    }
}

int main() {
    call;
    int T; cin >> T;

    for(int i = 0 ; i < T-1; i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(1);
    for(int i = 2; i <= T; i++){
        cout << p[i] << endl;
    }

}