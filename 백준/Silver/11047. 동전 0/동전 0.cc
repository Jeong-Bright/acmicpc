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
int arr[1001]; 
int arr2[1001];
int cnt;
vector<string> v;
string res[10006];
int main() {

    call;
    cin >> a >> b;
    for (int i = 0; i < a; i++) {
        cin >> arr[i];
    }
    int i = a-1;int sum = 0;
    while (1) {
        if (b == 0) break;
        if (arr[i] <= b) {
            b -= arr[i];
            sum++;
        }
        else
            i--;
    }
    cout << sum;
}