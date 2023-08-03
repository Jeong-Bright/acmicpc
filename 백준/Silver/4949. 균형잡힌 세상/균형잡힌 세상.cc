#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n';
#define call ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
vector<int> v;
vector<int> adj[100005];
int p[100005];



int main() {
    call;
    string S;
    while (1) {
        getline(cin, S);
        if (S == ".") break;
        stack<char> s;
        bool chk = true;
        for (auto c : S) {
            if (c == '(' || c == '[') s.push(c);
            else if (c == ')') {
                if (s.empty() || s.top() != '(') {
                    chk = false;
                    break;
                }
                s.pop();
            }
            else if (c == ']') {
                if (s.empty() || s.top() != '[') {
                    chk = false;
                    break;
                }
                s.pop();
            }
        }
        if (!s.empty()) chk = false;
        if (chk) { cout << "yes" << endl; }
        else cout << "no" << endl;
    }
}