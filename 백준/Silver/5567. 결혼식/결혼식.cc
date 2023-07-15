#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n';
#define call ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define maxs 10000005
int T;
int v,e;
bool vis[10005];
vector<int> vec[10005];
int visited[10005];
int ans;
// ll gcd(int a, int b) {
//     if(a == 0) return b;
//     return gcd(b%a, a); 
// }

// ll lcm(int a, int b){
//     return a / gcd(a,b) * b;
// }

void bfs(int cur){
    queue<int> q;
    q.push(cur);
    vis[cur] = true;
    visited[cur] = 0;
    while(!q.empty()){
        auto cur = q.front(); q.pop();
        if(visited[cur] >= 2) break;
        for(auto nxt : vec[cur]){
            if(vis[nxt]) continue;
            ans++;
            q.push(nxt);
            vis[nxt] = true;
            visited[nxt] = visited[cur] + 1;
        }

    }
}

int main() {

    call;
    cin >> v >> e;

    for(int i = 0 ; i < e ; i++){
        int x,y;
        cin >> x >> y;
        vec[x].push_back(y);
        vec[y].push_back(x);
    }
    fill(visited, visited+e, -1);
    bfs(1);
    cout << ans;
} 