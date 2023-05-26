#include <bits/stdc++.h>
#define call ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MX 2000005
#define MAX 0x7ffffff
#define endl '\n'
using namespace std;
typedef long long ll;
int DP[10005];
int A[10005];
int T;
int main() {
    call;
    cin >> T;
    while (T--) {
        int a, b;
        int temp = 0;
        vector<pair<int, int>> V;
        int num = 1;
        cin >> temp;
        for (int i = 0; i < temp; i++) {
            cin >> a >> b;
            V.push_back({ a, b });
        }
        sort(V.begin(), V.end());
        int x = 0;
        x = V[0].second;
        for (int i = 1; i < temp; i++) {
            if (x > V[i].second) {
                num++;
                x = V[i].second;
            }
            
            else
                continue;
        }

        cout << num << endl;
    }


}