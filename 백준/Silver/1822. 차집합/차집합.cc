#include <bits/stdc++.h>
using namespace std;
#define call ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MX 2000005
#define MAX 0x7ffffff
#define endl '\n'
#define X first
#define Y second
typedef long long ll;
int A[MX]; 
int B[MX];
vector<int> v;
int n, m;
int arr[10];
bool isused[10];



int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    int t;
    for (int i = 0; i < n; i++) cin >> A[i];
    for (int i = 0; i < m; i++) cin >> B[i];
    sort(A, A + n);
    sort(B, B + m);
    int st = 0; int en = n;
    for (int i = 0; i < n; i++) {
        t = A[i];
        int k = binary_search(B, B + m, t);
        if (k) continue;
        v.push_back(A[i]);
    }
    if (v.size() == 0) cout << 0;

    if (v.size() > 0) {
        cout << v.size() << endl;
        for (auto c : v) cout << c << ' ';
    }
}