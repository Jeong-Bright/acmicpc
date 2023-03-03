#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b;
	string c;
	deque<int> D;
	cin >> b;
	for (int i = 0; i < b;i++){
	cin >> c;
	if (c == "push_front") {
		cin >> a;
		D.push_front(a);
	}
	if (c == "push_back") {
		cin >> a;
		D.push_back(a);
	}
	if (c == "pop_front") {
		if (D.empty()) { cout << -1 << '\n'; }
		else { cout << D.front() << '\n'; D.pop_front(); }
	}
	if (c == "pop_back") {
		if (D.empty()) {cout << -1 << '\n';
	}
		else { cout << D.back() << '\n';D.pop_back(); }
	}
	if (c == "size") {
		cout << D.size() << '\n';
	}
	if (c == "empty") {
		cout << D.empty() << '\n';
	}
	if (c == "front") {
		if (D.empty()) { cout << -1 << '\n'; }
		else { cout << D.front() << '\n'; }
	}
	if (c == "back") {
		if (D.empty()) { cout << -1 << '\n'; }
		else { cout << D.back() << '\n'; }
	

	}

	}

}