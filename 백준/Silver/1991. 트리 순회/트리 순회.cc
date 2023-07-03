#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n';
#define call ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
vector<int> v;
int lc[31];
int rc[31];
int T; 

void preorder(int cur) {
    cout << char(cur+'A'-1);
    if(lc[cur] != 0) preorder(lc[cur]);
    if(rc[cur] != 0) preorder(rc[cur]);
}

void inorder(int cur){
    if(lc[cur] != 0) inorder(lc[cur]);
    cout << char(cur+'A'-1);
    if(rc[cur] != 0) inorder(rc[cur]);
}

void postorder(int cur){

    if(lc[cur] != 0) postorder(lc[cur]);
    if(rc[cur] != 0) postorder(rc[cur]);
    cout << char(cur+'A'-1);
}

int main() {
    call;
    cin >> T;
    for(int i = 1; i <= T; i++) {
        char c,l,r;
        cin >> c >> l >> r;
        if(l != '.') lc[c-'A'+1] = l-'A'+1;
        if(r != '.') rc[c-'A'+1] = r-'A'+1;
        
    }
    preorder(1); cout << endl;
    inorder(1); cout << endl;
    postorder(1); cout << endl;

}