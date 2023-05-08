#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
#define call ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MX 2000005
#define MAX 0x7ffffff
#define endl '\n'
typedef long long ll;
int A[105]; 
vector<int> v, v1;
int main() {
	call;
	unordered_set<string> s;

	int T; cin >> T;
	string X,Y;
	for (int i = 0; i < T; i++) {
		cin >> X >> Y;
		if (Y == "enter") {
			s.insert(X);
		}
		if (Y == "leave") {
			s.erase(X);
		}
		

	}
	vector<string> ans(s.begin(), s.end());
	sort(ans.begin(), ans.end(), greater<string>());
	for (auto c : ans) cout << c << endl;

}