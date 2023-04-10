#include <bits/stdc++.h>
#define call ios_base::sync_with_stdio(0); cin.tie(0);
#define MX 2000005
#define MAX 0x7ffffff
#define ll long long
#define endl '\n'
using namespace std;
vector<int> v;
stack<int> s;
int a[1000005], b[10000005];

int main(void) {
    call;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }


    for (int i = N-1; i >= 0; i--) {
        while (!s.empty() && s.top() <= a[i]) {
            s.pop();
        }
        if (s.empty()) b[i] = -1;
        else b[i] = s.top();

        s.push(a[i]);
        
    }

    for (int i = 0; i < N; i++) cout << b[i] << ' ';

    
    

}