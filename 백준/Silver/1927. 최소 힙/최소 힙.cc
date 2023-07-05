#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n';
#define call ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int main() {
    call;
    int T; cin >> T;
    priority_queue<unsigned int, vector<unsigned int>, greater<>> pq;

    unsigned int x;
    while(T--){
        cin >> x;
        if (x != 0) 
        pq.push(x);

        else {
            if(pq.empty()) {
            cout << "0" << endl;
            }
            else {cout << pq.top() << endl;
            pq.pop();}


        }
    }


}