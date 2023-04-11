#include <bits/stdc++.h>
#define call ios_base::sync_with_stdio(0); cin.tie(0);
#define MX 2000005
#define MAX 0x7ffffff
#define ll long long
#define endl '\n'
using namespace std;
vector<int> v;
stack<long long> s;
int a[1000005], b[10000005];

int main(void) {
    call;
    int N;
    cin >> N;
    a[1] = 0;
    for (int i = 2; i <= N; i++) {
        a[i] = a[i - 1] + 1;
        if (i % 2 == 0) a[i] = min(a[i], a[i / 2] + 1);
        if (i % 3 == 0) a[i] = min(a[i], a[i / 3] + 1);

    }
    cout << a[N];
    

}