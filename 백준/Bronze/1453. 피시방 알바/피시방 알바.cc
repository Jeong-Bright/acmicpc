#include <bits/stdc++.h>
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
	int sum = 0;
	int T,X; cin >> T;
	while (T--) {
		cin >> X;
		A[X]++;
		if (A[X] > 1) sum++;
	}
	cout << sum;
}