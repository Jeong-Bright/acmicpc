#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n';
#define call ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
int arr[1000005];

int main() {
    call;
    int X,Y;
    cin >> X >> Y;
    int cur = 1;
    int res = 0;
    int cnt = -2147483647;
    for(int i = 1; i <= X; i++){
        cin >> arr[i];
    }

    while(cur <= Y){
        res += arr[cur++];
    }
    int c = Y;

    for(int st = 1; st <= X; st++){
        if(c > X) break;

        cnt = max(cnt, res);
        
        if(c+1 <= X)
        res = res+arr[c+1]-arr[st];
        else
        res = res+arr[c]-arr[st];

        c++;
    }
    cout << cnt;


}