#include <bits/stdc++.h>
#define call ios::sync_with_stdio(0); cin.tie(0);
#define MX 2000005
#define MAX 0x7ffffff
#define endl '\n'
using namespace std;
typedef long long ll;
int T;
int a, b;
int DP[1005];
int arr[21]; 
int arr2[1001];
int main() {

    call;
    cin >> a;
    for (int i = 1; i <= a; i++) {
        cin >> arr2[i];
        DP[i]= 1;
    }
    int sum = 0;
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j < i; j++) {
            if (arr2[i] > arr2[j]) {
                DP[i] = max(DP[i], DP[j] + 1);
            }
        }
        sum = max(DP[i], sum);
    }
    cout << sum;
    
}