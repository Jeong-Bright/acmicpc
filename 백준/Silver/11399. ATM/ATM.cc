#include <bits/stdc++.h>
#define call ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MX 2000005
#define MAX 0x7ffffff
#define endl '\n'
using namespace std;
typedef long long ll;
int greedy[10005];
int A[100005];
int T;
int main() {
    call;
    cin >> T;
    int temp;
    for (int i = 1; i <= T; i++) cin >> A[i];
    A[0] = 0;
    for (int i = 1; i <= T; i++) {
        for (int j = 1; j <= T - i; j++) {
            if (A[j] > A[j + 1]) {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
    int sum = 0;
    for (int i = 1; i <= T; i++) {
        A[i] = A[i] + A[i - 1];
        sum += A[i];
    }
    cout << sum; 
}