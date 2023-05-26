#include <bits/stdc++.h>
#define call ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MX 2000005
#define MAX 0x7ffffff
#define endl '\n'
using namespace std;
typedef long long ll;
ll DP[66][1001];
int A[10005];
int T, temp;
int main() {
    call;
    cin >> T;
    int a;
    int sum1 = 0;
    for (int i = 0; i <= 10; i++) {
        DP[1][i] = i;
    }

    while (T--) {
        ll sum = 0;
        cin >> a;
        if (a == 1) { 
        cout << DP[1][10] << endl; 
        continue; }

        for (int i = 2; i <= a; i++) {
            for (int j = 0; j <= 10; j++) {
                if (j == 0) {
                    DP[i][0] = DP[i - 1][0];
                }
                else {
                    DP[i][j] = DP[i][j - 1] + DP[i - 1][j];
                }
                sum = DP[i][j];
            }

        }

        cout << sum << endl;
        memset(DP, 0, sizeof(int) * 10);
    }


}