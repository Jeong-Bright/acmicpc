#include <bits/stdc++.h>
#define call ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MX 2000005
#define MAX 0x7ffffff
#define endl '\n'
using namespace std;
vector<int> v1;
vector<int> v;
int A[MX];
int n;
int x[1000005];
vector<int> tmp, uni; // unique
int main(void) {
    call;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> A[i];

    for (int i = 0; i < n; i++) {
        v.push_back(A[i]);
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++) {
        if (i == 0 || v[i - 1] != v[i]) {
            v1.push_back(v[i]);
        }
    }
    for (int i = 0 ; i < n ; i++)
    cout << lower_bound(v1.begin(), v1.end(), A[i]) - v1.begin() << endl;

    
    
}