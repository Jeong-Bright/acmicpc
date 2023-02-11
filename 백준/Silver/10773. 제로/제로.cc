#include <iostream>
#include <stack>
using namespace std;

int main() {

	stack<int> st;

	int sum = 0;
	int a;
	int n; cin >> n;
	for (int i = 0;i < n;i++) {
		int c; cin >> c;
	
		if (c == 0) {
			a = st.top();
			st.pop();
			sum -= a;
			
		}
		else {
			st.push(c);
			sum += st.top();
		}
	}
	cout << sum;

}
