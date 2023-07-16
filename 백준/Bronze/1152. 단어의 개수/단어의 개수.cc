#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n';
#define call ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define maxs 10000005
int T,X;

// ll gcd(int a, int b) {
//     if(a == 0) return b;
//     return gcd(b%a, a); 
// }

// ll lcm(int a, int b){
//     return a / gcd(a,b) * b;
// }


int main() {

    call;
    string P;
    int cnt = 0;
    int lst = P.length();
    getline(cin , P);
    for(int i = 0 ; i < P.length(); i++){
        if(P[i] == ' ' && P.length() <= 1){ cout << 0; return 0;}
        if(P[i] == ' ' && P[i+1] == ' ') {break;}
        if(i == 0 && P[i] != ' '){
            cnt = 1;
        }
        else if(P[i] == ' ') cnt++;
    }
    if(P[P.length()-1] == ' ') cnt--;
    cout << cnt;

    
} 