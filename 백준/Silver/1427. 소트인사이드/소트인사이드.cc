#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n';
#define call ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define maxs 10000005

// ll gcd(int a, int b) {
//     if(a == 0) return b;
//     return gcd(b%a, a); 
// }

// ll lcm(int a, int b){
//     return a / gcd(a,b) * b;
// }/
int arr[100005];
int main() { 
    call;
    string x; cin >> x;
    int X = x.length();
    int T = stoi(x);
    int m, i;
    for(int i = 0 ; i < X; i++){
        m = T%10;
        T /= 10;
        arr[i] = m;
    }
    sort(arr, arr+X, greater<int>());
    for(int i = 0 ; i < X ; i++){

        cout << arr[i];

    }


}