#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define call ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define maxs 10000005

// ll gcd(int a, int b) {
//     if(a == 0) return b;
//     return gcd(b%a, a); 
// }

// ll lcm(int a, int b){
//     return a / gcd(a,b) * b;
// }

int x=0,y=0,z=0;
int T,X,sum;
ll mx = 0;
int arr[1000005], arr2[1000005];


int main() { 
    call;
    cin >> T;
    arr[1] = 0;
    for(int i = 2; i <= T; i++){
        arr[i] = arr[i-1]+1;
        arr2[i] = i-1;
        if(i%2 == 0 && arr[i] > arr[i/2] + 1) {
            arr[i] = arr[i/2]+1;
            arr2[i] = i/2;
            }
        if(i%3 == 0 && arr[i] > arr[i/3]+1) {
            arr[i] = arr[i/3]+1;
            arr2[i] = i/3;
            }
    }
    cout << arr[T] << endl;
    X = T;
    while(true){
        cout << X << ' ';
        if(X == 1) break;
        X = arr2[X];
    }

}