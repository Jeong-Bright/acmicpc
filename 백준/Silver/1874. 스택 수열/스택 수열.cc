#include <bits/stdc++.h>
#define call ios_base::sync_with_stdio(0); cin.tie(0);
#define MX 2000005
#define MAX 0x7ffffff
#define ll long long
#define endl '\n';
using namespace std;
stack<int> st;
int main() {
	call;
	int n = 1;
	int N;
	int K;
	cin >> N;
	vector<char> M;

	for (int i = 0; i < N; i++) {

		cin >> K;
		while (n <= K) {
			st.push(n);
			n++;
			M.push_back('+');
		}
				if (st.top() == K) {
					st.pop();
					M.push_back('-');
				}
				else {
					cout << "NO";
					return 0;
				}

		
	}
	for (auto c : M) cout << c << endl
}