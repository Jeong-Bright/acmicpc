#include <bits/stdc++.h>
using namespace std;
int main() {
	stack<int> S;
	string a;
	int N;
	int x;
	
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a;
		if (a == "push"){
		cin >> x;
		S.push(x);
		}
		else if (a == "pop") {
			if (S.empty()) { cout << "-1" << '\n'; }
			else {
				cout << S.top() << '\n';
				S.pop();
			}
				
		}
		else if (a == "top") {
			if (S.empty())
			{
				cout << "-1" << '\n';
			}
			else { cout << S.top() << '\n'; }
		}
		else if (a == "empty") {
			cout << S.empty() << '\n';
		}
		else if (a == "size") {
			cout << S.size() << '\n';
		}
			
	}


}