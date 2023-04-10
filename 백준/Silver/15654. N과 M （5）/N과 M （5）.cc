#include <bits/stdc++.h>
#define call ios_base::sync_with_stdio(0); cin.tie(0);
#define MX 2000005
#define MAX 0x7ffffff
#define ll long long
#define endl '\n';
using namespace std;
int n, m;
int arr[10];
int a[10];
bool isused[10];


void func(int k) { 
    if (k == m) {
        for (int i = 0; i < m; i++)
            cout << arr[i] << ' '; 
        cout << '\n';
        return;
    }

    for (int i = 1; i <=n; i++) {
        if(!isused[i]){
            isused[i] = 1;
            arr[k] = a[i-1];
            func(k + 1);
            isused[i] = 0; 
        }
        }
 }
 

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    func(0);
}