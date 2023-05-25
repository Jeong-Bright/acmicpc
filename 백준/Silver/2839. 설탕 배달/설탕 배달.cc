#include <bits/stdc++.h>
#define call ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MX 2000005
#define MAX 0x7ffffff
#define endl '\n'
using namespace std;
typedef long long ll;
int A[MX];
int T;
int main() {
    call;
    cin >> T;
    fill(A, A+MX, MAX);
    A[3] = 1; A[5] = 1;
    for(int i = 6; i <= T; i++){

        A[i] = min(A[i-5] + 1 , A[i-3] + 1);

    }
    if(A[T] >= MAX) cout << -1;
    else cout << A[T];

}