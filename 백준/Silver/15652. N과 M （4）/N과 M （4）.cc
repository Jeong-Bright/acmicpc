#include <bits/stdc++.h>
#define call ios_base::sync_with_stdio(0); cin.tie(0);
#define MX 2000005
#define MAX 0x7ffffff
#define ll long long
#define endl '\n';
using namespace std;
int n, m;
int arr[10];
bool isused[10];

void func(int z, int k) { 
    if (k == m) {
        for (int i = 0; i < m; i++)
            cout << arr[i] << ' '; 
        cout << '\n';
        return;
    }

    for (int i = z; i <= n; i++) {
            isused[i] = 1;
            arr[k] = i;
            func(i, k + 1);
            isused[i] = 0; 

        }
 }
 

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    func(1,0);
}