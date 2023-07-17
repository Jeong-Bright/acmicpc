#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
#define endl '\n';
#define call ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define maxs 10000005
int T, X;

// ll gcd(int a, int b) {
//     if(a == 0) return b;
//     return gcd(b%a, a); 
// }

// ll lcm(int a, int b){
//     return a / gcd(a,b) * b;
// }
int arr[50];
int arr1[10];
int main() {

    call;
    int n = 10;
    int cnt = 0;
    for(int i = 0; i < n ; i++){
        cin >> X;
        T = X%42;
        arr[T]++;
    }
    for(int i = 0; i < 42; i++){
        if(arr[i] > 0) cnt++;
    }
    cout << cnt;
}