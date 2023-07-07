#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n';
#define call ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define max 200
int n = 10;
int data[15];
int arr[max];
int arr2[max];

class cmp{

public:
    bool operator() (int a, int b){
        if(abs(a) != abs(b)) return abs(a) > abs(b);
        return a > 0 && b < 0;
    }

};




int main() {
    call;
    
    priority_queue<int, vector<int>, cmp> pq;

    int T; cin >> T;
    while (T--) {
        int x; cin >> x;
        if(x == 0) {
            if(pq.empty()){
                cout << "0" << endl;
            }
            else {cout << pq.top() << endl; pq.pop();}
        }
        else {
            pq.push(x);
        }

    }




}