#include <bits/stdc++.h>
#define call ios::sync_with_stdio(0); cin.tie(0);
using namespace std;

int main() {

	call;
	int N; cin >> N; string M;
	

	for (int i = 0; i < N; i++) {
		stack<char> s;
		cin >> M;
		for (int j = 0; j < M.length(); j++) {
			if (M[j] == '(') s.push(1);
			else if (M[j] == ')') {
				if (!s.empty()) { s.pop(); }
			else {
				s.push(1);
				break;
				}
			}
			

		}
		if (s.empty()) cout << "YES" << '\n';
		else cout << "NO" << '\n';
	}




}