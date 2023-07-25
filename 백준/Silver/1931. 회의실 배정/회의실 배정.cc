#include <bits/stdc++.h>
#define call ios::sync_with_stdio(0); cin.tie(0);
#define MX 2000005
#define MAX 0x7ffffff
#define endl '\n'
using namespace std;
typedef long long ll;
int T;
int a, b;
vector<pair<int, int>> v;
int main() {

    call;
    cin >> T;
    
    for (int i = 0; i < T; i++) {
        int x, y;
        cin >> x >> y;
        v.push_back({x,y});
    }
    sort(v.begin(), v.end());
    int t = v[0].second;
    int sum = 1;
    for (int i = 1; i < v.size(); i++) {
        if (v[i].first < t && v[i].second < t) t = v[i].second;
        else if (v[i].first >= t && v[i].second >= t) {
            sum++;
            t = v[i].second;
        }

    }
    cout << sum;
}