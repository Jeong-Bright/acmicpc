#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n';
#define call ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
vector<int> v;
vector<int> adj[100005];
int p[100005];



int main() {
    call;
    stack<int> stk;
    int v; cin >> v;
    int sum = 0;
    while (v--) {
        int b; cin >> b;
        if (b == 0) {
            if (!stk.empty()) {
                sum -= stk.top();
                stk.pop();
            }
        }
        else {
            stk.push(b); sum += stk.top();
        }
    }
    cout << sum;
 

}