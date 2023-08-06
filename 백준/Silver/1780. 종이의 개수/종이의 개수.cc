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
int arr[2205][2205];

bool func(int a, int b, int c){
    for(int i = a; i < a+c; i++){
        for(int j = b; j < b+c; j++){
            if(arr[a][b] != arr[i][j]){
                return false;
            }
        }
    }
    return true;
}

void Q(int a,int b,int c){
    if(func(a,b,c)){
        if(arr[a][b] == -1){
            x++;
        }
        else if(arr[a][b] == 0){
            y++;
        }
        else if(arr[a][b] == 1){
            z++;
        }
    }
    else {
        int mid = c/3;
        for(int i = 0 ; i < 3; i++){
            for(int j = 0 ; j <3 ; j++){
                Q(mid*i+a,mid*j+b,mid);
            }
        }
    }
}

int main() { 
    call;
    cin >> T;
    for(int i = 0; i < T; i++)
    for(int j = 0; j < T; j++)
    cin >> arr[i][j];

    Q(0,0,T);
    cout << x << endl << y << endl << z;
}