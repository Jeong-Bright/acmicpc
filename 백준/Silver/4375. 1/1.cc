#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n';
#define call ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
vector<int> v;

int main() {
    call;
    int X,Y;
    while(cin >> X){
    Y = 1;
    int cnt = 1;
    while(1){
    if(Y%X == 0){
    break;
    }
    else{
    Y = (Y*10+1)%X;
    cnt++;
    }
    }
    cout << cnt << endl;
}

}