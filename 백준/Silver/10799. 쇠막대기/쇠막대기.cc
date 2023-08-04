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

int v;
int T,X,sum,mid;
ll mx = 0;
int arr[105][105];
bool vis[105];


int main() { 
    call;
    string S; cin >> S;
    stack<char> s;
    X = S.length();

    for(int i = 0 ; i < X; i++){
        if(S[i] == '(') s.push(S[i]);
        else if(S[i] == ')'){
            if(S[i-1] == '('){
                s.pop();
                mx += s.size();
            }
            else if(S[i-1] == ')'){
                s.pop();
                mx++;
            }
        }
    }
    cout << mx;




}