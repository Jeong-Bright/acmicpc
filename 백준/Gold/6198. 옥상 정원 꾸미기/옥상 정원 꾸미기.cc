#include <bits/stdc++.h>
#define call ios_base::sync_with_stdio(0); cin.tie(0);
#define MX 2000005
#define MAX 0x7ffffff
#define ll long long
#define endl '\n'
using namespace std;
vector<int> v;
stack<long long> s;
long long a[1000005], b[10000005];

int main(void) {
    call;
    int N;
    cin >> N;
    long long sum = 0;

    for (int i = 0; i < N; i++) cin >> a[i];
    


    for (int i = 0; i < N ; i++) {

     
     while (!s.empty() && s.top() <= a[i]) {
             s.pop();
         
     }
     s.push(a[i]);
     sum += s.size();
     


    }

    cout << sum - N;
    
    

}