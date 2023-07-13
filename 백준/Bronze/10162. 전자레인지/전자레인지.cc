#include <bits/stdc++.h>
#define call ios::sync_with_stdio(0); cin.tie(0);
#define MX 2000005
#define MAX 0x7ffffff
#define endl '\n'
using namespace std;
typedef long long ll;
int T;
int a, b;
int arr[3] = { 300, 60, 10 };
int arr2[3];
int main() {

    call;
    int i = 0;
    int T; cin >> T;

    for (int i = 0; i < 3; i++) {
        while (T >= arr[i]) {
            T -= arr[i];
            arr2[i]++;
        }
    }
    for (int i = 0; i < 3; i++) {
        if (T != 0) {
            cout << -1;
            break;
        }
        cout << arr2[i] << ' ';
    }
}