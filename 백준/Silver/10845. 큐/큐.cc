#include <bits/stdc++.h>
using namespace std;
int main() {

	queue<int> Q;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		string a;
		cin >> a;
		if (a == "push") {
			int x;
			cin >> x;
			Q.push(x);
		}
		else if (a == "pop") {
			if (Q.empty()) cout << "-1" << '\n';
			else
			{
				cout << Q.front() << '\n'; Q.pop();
			}
		}
		else if (a == "size") {
			cout << Q.size() << '\n';
		}
		else if (a == "empty") {
			cout << Q.empty() << '\n';
		}
		else if (a == "front") {
			if (Q.empty()) cout << "-1" << '\n';
			else { cout << Q.front() << '\n'; }
		}
		else if (a == "back") {
			if (Q.empty()) cout << "-1" << '\n';
			else { cout << Q.back() << '\n'; }
		}
	}


}

