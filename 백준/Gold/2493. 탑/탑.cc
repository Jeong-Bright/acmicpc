#include <bits/stdc++.h>
#define call ios_base::sync_with_stdio(0); cin.tie(0);
#define MX 2000005
#define MAX 0x7ffffff
#define ll long long
#define endl '\n'
using namespace std;
vector<int> v;
int a[MX], b[MX];

int main(void) {
    call;

    int N, X; cin >> N;
    stack<pair<int,int>> s;

    for (int i = 1; i <= N; i++) {
        cin >> X;
        while (!s.empty()) {
            if (X <= s.top().first) {
                cout << s.top().second << ' ' ;
                break;
            }
            s.pop();
             
        }
        if (s.empty()) cout << 0 << ' ';
        s.push({ X, i });

    }

}