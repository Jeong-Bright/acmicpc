#include <bits/stdc++.h>
#define call ios::sync_with_stdio(0); cin.tie(0);
using namespace std;

int main() {

	call;
	int A;
	char c,k; string N;
	list<char> L;
	list<char>::iterator cur;
	cin >> N;
	cin >> A;
	for (int i = 0;i < N.length() ;i++) {
		L.push_back(N[i]);
	}
	cur = L.end();

	for (int i = 0; i < A; i++) {
		cin >> c;
		if (c == 'L') {
			if (cur == L.begin()) continue;
			cur--;
		}
		if (c == 'D') {
			if (cur == L.end()) continue;
			cur++;

		}
		if (c == 'B') {
			if (cur == L.begin()) continue;
			cur = L.erase(--cur);
		}
		if (c == 'P') {
			cin >> k;
			L.insert(cur, k);
		}

	}

	for (auto z : L) {
		cout << z;
	}


	
	

}