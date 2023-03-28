#include <bits/stdc++.h>
#define call ios::sync_with_stdio(0); cin.tie(0);
#define MX 2000005
#define MAX 0x7ffffff
int N,T;
int D[200005];
using namespace std;
int main() {

	call;
	cin >> N;
	D[1] = 1; D[2] = 2; D[3] = 4;

	while(N--){
	cin >> T;
	for (int i = 4; i <= T; i++) {
		D[i] = D[i - 1] + D[i - 2] + D[i - 3];

	}
	cout << D[T] << '\n';
	}

	

}