#include <bits/stdc++.h>
#define call ios_base::sync_with_stdio(0); cin.tie(0);
#define MX 2000005
#define MAX 0x7ffffff
#define ll long long
#define endl '\n'
using namespace std;
vector<int> v;
stack<long long> s;
ll a[1000005], b[10000005];

int main(void) {
    call;
    int N;
    cin >> N;
    a[1] = 1; a[2] = 1;
    for (int i = 3; i <= N; i++) {
        a[i] = a[i - 1] + a[i - 2];
    }
    if (N < 1)cout << -1;
    else
    cout << a[N];
    

}