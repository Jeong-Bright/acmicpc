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
    list<char> l;
    auto t = l.end();
    string X; cin >> X;
    int v; cin >> v;
    for (int i = 0; i < X.length(); i++) l.push_back(X[i]);

    while (v--) {
        char Q; cin >> Q;
        if (Q == 'L') {
            if (t != l.begin())
                --t;
        }
        else if (Q == 'D') {
            if (t != l.end())
            ++t;
        }

        else if (Q == 'B') {
            if (t != l.begin()) {
                t--;
                t = l.erase(t);
            }
        }
        else if (Q == 'P') {
            char M; cin >> M;
            l.insert(t, M);
        }
    }
    for (auto x : l) cout << x;
}