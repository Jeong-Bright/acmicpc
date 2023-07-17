#include <bits/stdc++.h>
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
int arr[500005];
int arr1[500005];
int main() {
    
    call;
    cin >> T;
    int p = 0;
    int x = 0;
    int y = 0;
    int cnt=0;
    int res=0;
    for(int i = 0; i < T; i++){
        cin >> arr[i];
        p+=arr[i];
        arr1[arr[i] + 4000]++;
    }

    for(int i = 0; i <= 8000; i++){
        if(arr1[i] > cnt){
            cnt = arr1[i];
            res = i;
        }
    }

   sort(arr, arr+T);


    p = round(double(p) / T);

    y = arr[T-1] - arr[0];
    
    int z = arr[1];
    x = arr[(T-1)/2];
    for(int i = res+1; i <= 8000; i++){
        if(arr1[i] == cnt){
            res = i;
            break;
        }
    }
    res = res-4000;

    cout << p << endl; 
    cout << x << endl; 
    cout << res << endl; 
    cout << y << endl;
}