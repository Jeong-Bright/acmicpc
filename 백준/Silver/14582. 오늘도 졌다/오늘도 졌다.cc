#include <bits/stdc++.h>
#define call ios::sync_with_stdio(0); cin.tie(0);
#define MX 2000005
#define MAX 0x7ffffff
#define endl '\n'
using namespace std;
typedef long long ll;
int T;
int a, b;
int arr[10];
int arr2[10];
int main() {

    call;
    for (int i = 0; i < 9; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < 9; i++) {
        cin >> arr2[i];
    }
    int sumS = 0;
    int sumW = 0;
    bool res = false;
    for (int i = 0; i < 9; i++) {
        sumS += arr[i];
        if (i <= 8 && sumS > sumW) res = true;
        sumW += arr2[i];
    }

    if (res == true) cout << "Yes";
    else cout << "No";
}