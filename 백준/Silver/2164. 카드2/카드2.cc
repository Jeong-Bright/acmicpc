#include <bits/stdc++.h>
#define call ios_base::sync_with_stdio(0); cin.tie(0);
#define MX 2000005
#define MAX 0x7ffffff
#define ll long long
#define endl '\n';
using namespace std;
int main() {
	call;
	queue<int> q;
	vector<int> v;
	int N;
	cin >> N;
	
	for (int i = 1;i <= N;i++) q.push(i);

	while (q.size() != 1) {


		q.pop();
		v.push_back(q.front());
		q.pop();
		q.push(v.back());

	}

	cout << q.front() << endl

	
}