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
// }
int main() { 
    call; 
string T; 
cin >> T; 
int cnt = 0;
int y = 0;
if(T.length() <= 1 && T != "3" && T != "9" && T != "6") {cout << cnt << '\n' << "NO"; return 0;}
if(T == "3" || T == "9" || T == "6") {cout << cnt << '\n' << "YES"; return 0;}
    for(int i = 0 ; i < T.length(); i++)
        { 
        y += T[i] - '0'; 
        }
cnt = 1;

while(1){     
    int x = 0;
    int i = 0;   

    if(y < 10 && y % 3 == 0) {cout << cnt << '\n' << "YES"; break;}

    while(y > 0){
        x += y%10;
        y /= 10;
    }    
    cnt++;
    y = x;
    if(y <= 9 && y % 3 != 0) {cout << cnt << '\n' << "NO"; break;}
    }


}