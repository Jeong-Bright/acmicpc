#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n';
#define call ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

bool isprime(int N){
    if(N == 1) return 0;
    for(int i = 2; i*i<=N; i++){
        if(N%i == 0) return 0;
    }
    return 1;
}

int main() {
    int T,X;
    int cnt = 0;
    cin >> T;
    for(int i = 0 ; i < T; i++){
        cin >> X;
        cnt += isprime(X);

    }
    cout << cnt << endl;

}