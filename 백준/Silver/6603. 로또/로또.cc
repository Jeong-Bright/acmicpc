#include <bits/stdc++.h>
using namespace std;
#define call ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MX 2000005
#define MAX 0x7ffffff
#define endl '\n'
#define X first
#define Y second
typedef long long ll;
int A[MX]; 
int B[MX];
vector<int> v, v1;
int n;
int m = 6;
int arr[10];
bool check[10];



void func(int k, int j) {
    if (k == m) {
        for (int i = 0; i < m; i++)
            cout << v1[i] << ' ';
        cout << '\n';
        return;
    }

    for (int i = j; i < n; i++) { 
        if (!check[i]) {
            v1.push_back(v[i]);
            check[i] = 1;
            func(k + 1, i+1);
            v1.pop_back();
            check[i] = 0;
        }

    }
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int num;
    while (true) {
        cin >> n;
        if (n == 0) break;
        fill(check, check + n, false);
        v.clear();
        v1.clear();
        for (int i = 0; i < n; i++) {
            cin >> num;
            v.push_back(num);
        }
        func(0,0);
        cout << endl;
    }
}
