#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n';
#define call ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);



int main() {
    call;
    int T; cin >> T;
    priority_queue<int, vector<int>, greater<>> pq;
    int sum = 0;
    int x;
    for(int i = 0 ; i < T; i++)
    {     
        cin >> x;
        pq.push(x);
    }

    while(pq.size() > 1) {
        int a = pq.top(); pq.pop();
        int b = pq.top(); pq.pop();
        sum += a+b;
        pq.push(a+b);
    }
    cout << sum;

}