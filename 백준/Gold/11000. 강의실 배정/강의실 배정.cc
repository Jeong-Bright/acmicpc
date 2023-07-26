#include <bits/stdc++.h>
#define call ios::sync_with_stdio(0); cin.tie(0);
#define MX 2000005
#define MAX 0x7ffffff
#define endl '\n'
using namespace std;
typedef long long ll;
int T;
int a, b;
vector<pair<ll, ll>> v;
priority_queue <int, vector<int>, greater<int>> v1;
int main() {

    call;
    cin >> T;
    
    for (int i = 0; i < T; i++) {
        ll x, y;
        cin >> x >> y;
        v.push_back({x,y});
    }
    sort(v.begin(), v.end());


    for (int i = 0; i < v.size(); i++) {
        v1.push(v[i].second);
        if (v1.top() <= v[i].first) v1.pop();

    }
    cout << v1.size();
}