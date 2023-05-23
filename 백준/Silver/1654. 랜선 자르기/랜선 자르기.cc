#include <bits/stdc++.h>
#define call ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MX 2000005
#define MAX 0x7ffffff
#define endl '\n'
using namespace std;
typedef long long ll;

ll K[MX];
ll T, temp;
int main() {
    call;
    cin >> T >> temp;
    ll sum = 0;
    ll ans = 0;
    for (int i = 0; i < T; i++) {
        cin >> K[i];
    }
    sort(K, K + T);
    ll st = 1;
    ll en = K[T - 1];

    while (st <= en) {
        ll mid = (st + en) / 2;
        sum = 0;
        for (int i = 0; i < T; i++) {
            sum += K[i] / mid;
        }
        if (sum < temp) {
            en = mid - 1;
        }
        if (sum >= temp) {
            st = mid + 1;
            ans = mid;
        }
    }

    cout << ans;



}


