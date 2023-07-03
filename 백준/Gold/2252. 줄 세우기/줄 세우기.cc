#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n';
#define call ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
vector<int> adj[32005];
vector<int> result;
int deg[32005];

int main() {
    int N,M; cin >> N >> M;
    queue<int> q;
    for(int i = 1; i <= M; i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        deg[v]++;
    }

    for(int i = 1; i <= N; i++){
        if(deg[i] == 0) q.push(i);
    }
    while(!q.empty()){
        auto cur = q.front(); q.pop();
        result.push_back(cur);
        for(auto nxt : adj[cur]){
            deg[nxt]--;
           if( deg[nxt] == 0 ) q.push(nxt);
        }
    }

        for(auto x : result) cout << x << ' ';


}