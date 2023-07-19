#include <bits/stdc++.h>
#define call ios::sync_with_stdio(0); cin.tie(0);
#define MX 2000005
#define MAX 0x7ffffff
#define endl '\n'
using namespace std;
typedef long long ll;
int T;
int a, b;
ll arr[51];
int arr2[10];
int main() {

    call;
    cin >> T >> a >> b;
    int chk = 0; int x = 0;
    if (T == 0) {
        cout << 1; return 0;
    }
    fill(arr + 1, arr + b + 1, 0);
    for (int i = 1; i <= T; i++) {
        cin >> arr[i];
    }
    for (int i = 1; i <= b; i++) {
        if (T == b && a == arr[T] && a == arr[1]) break;
        if (a == arr[1] && a != arr[T])
        {
            chk = i; break;
        }
        if (a == arr[i - 1] && a > arr[i]) { chk = i - 1; break; }
        else if (b > T && a >= arr[i]) {
            chk = i; break;
        }
        else if (a > arr[i]) {
            chk = i; break;
        }
    }

    if (chk == 0) cout << -1;
    else cout << chk;


}