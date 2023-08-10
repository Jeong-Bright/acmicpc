#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n';
#define call ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
vector<int> v;
vector<char> adj;
int p[100005];



int main() {
    call;
    stack<int> intstk;
    stack<char> stk;
    int v; cin >> v;
    int num = 1;



    for (int i = 1; i <= v; i++) {

        int k; cin >> k;
        while (k >= num) {
            intstk.push(num);
            adj.push_back('+');
            num++;
        }
        if (intstk.top() >= k) {
            intstk.pop();
            adj.push_back('-');
        }
    }

    if (intstk.empty()) {
        for (int i = 0; i < adj.size(); i++) {
            cout << adj[i] << endl;
        }
    }
    else cout << "NO" << endl;
    

}