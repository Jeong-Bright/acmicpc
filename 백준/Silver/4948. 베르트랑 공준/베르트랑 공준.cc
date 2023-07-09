#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n';
#define call ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define maxs 10000005
bool prime[250005];
ll gcd(int a, int b) {
    if(a == 0) return b;
    return gcd(b%a, a); 
}

ll lcm(int a, int b){
    return a / gcd(a,b) * b;
}

int is_prime(int x) {
    vector<int> p;
    for(int i = 2; i * i <= 2*x; i++){
        if(prime[i]) continue;
        for(int j = i*i; j <= 2*x; j+=i){
            prime[j] = true;
        }
    }
    int cnt = 0;
    for(int i = x+1 ; i <= 2*x; i++){
        if(!prime[i]) cnt++;
    }
    return cnt;
}

int main() {

    call;
    while(1){
        int x;
        cin >> x;
        if(x == 0) break;

        if(x == 1) {cout << 1 << endl;}
        else{
        cout << is_prime(x) << endl;}

    }



     
} 