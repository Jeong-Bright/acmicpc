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

int T,X,sum;
ll mx = 0;
int arr[55];
int chk = 0;

int main() { 
    call;
    
    cin >> T >> X;
    deque<int> deq;
    for(int i = 1 ; i <= T; i++){ deq.push_back(i);}
    sum = 0;
while(X--){    
    int j;
    cin >> j;
    int idx = find(deq.begin(), deq.end(), j) - deq.begin();

    if(idx < deq.size() - idx){
        while(1){
            if(deq.front() == j){ deq.pop_front(); break; }
            deq.push_back(deq.front());
            deq.pop_front();
            sum++;
        }
    }
    else {
        while(1){
            if(deq.front() == j){deq.pop_front(); break;}
            deq.push_front(deq.back());
            deq.pop_back();            
            sum++;
        }
    }


}
    cout << sum;




}