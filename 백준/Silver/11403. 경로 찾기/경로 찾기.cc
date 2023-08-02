#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n';
#define call ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define maxs 10000005

// ll gcd(int a, int b) {
//     if(a == 0) return b;
//     return gcd(b%a, a); 
// }

// ll lcm(int a, int b){
//     return a / gcd(a,b) * b;
// }

int v;
int T,X,sum,mid;
ll mx = 0;
int arr[105][105];
bool vis[105];

int bfs(int x, int y) {
    fill(vis, vis+v+2, 0);
    queue<int> q;
    q.push(x);

    while(!q.empty()){
        auto cur = q.front();
        q.pop();

        if(vis[cur]) continue;
        if(cur != x) vis[cur] = 1;

        for(int i = 0 ; i < v; i++){
            if(vis[i]) continue;
            if(arr[cur][i]){
                if(i == y) return true;
                q.push(i);
            }
        }
        
    }
    return false;

}


int main() { 
    call;
    cin >> v;
    for(int i = 0 ; i < v ; i++){
        for(int j = 0 ; j < v; j++){
            cin >> arr[i][j];
        }       
    }

    for(int i = 0 ; i < v ; i++){
        for(int j = 0 ; j < v; j++){
            cout << bfs(i,j) << ' ';
        }       
        cout << endl;
    }

   
}