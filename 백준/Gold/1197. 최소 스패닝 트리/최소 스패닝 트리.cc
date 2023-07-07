#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n';
#define call ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define X first
#define Y second

int v,e;
int ans = 0;
vector<pair<int,int>> adj[10005];

bool chk[10005];
int cnt = 0;



int main() {
    call;
    cin >> v >> e;

    for(int i = 0 ; i < e; i++){
        int cost, a, b;
        cin >> a>> b >> cost;
        adj[a].push_back({cost, b});
        adj[b].push_back({cost, a});
    }
    chk[1] = 1;
    priority_queue< tuple<int,int,int>, vector<tuple<int,int,int>>, greater<tuple<int,int,int>> > pq;
    for(auto nxt : adj[1])
    pq.push({nxt.X, 1, nxt.Y});
    while(cnt < v-1){
        int cost, a, b;
        tie(cost, a , b) = pq.top(); pq.pop();
        if(chk[b]) continue;
        //cout << cost << ' ' << a << ' ' << b << endl;
        ans += cost;
        chk[b] = 1;
        cnt++;
        for(auto nxt : adj[b]){
            if(!chk[nxt.Y]){
                pq.push({nxt.X, b, nxt.Y});
            }
        }
    }
    cout << ans;
}