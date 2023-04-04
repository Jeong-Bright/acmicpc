#include <bits/stdc++.h>
#define call ios_base::sync_with_stdio(0); cin.tie(0);
#define MX 2000005
#define MAX 0x7ffffff
#define ll long long;
using namespace std;
bool A[MX];
int main() {

	int N,M;
	cin >> M >> N;

	for (int i = 2; i <= N;i++) {
		A[i] = true;
	}

	for (int i = 2; i*i <= N; i++) {
		if (A[i] == 0) continue;
			for (int j = i * i;j <= N;j+=i) {
				A[j] = false;
			}
	}

	for (int i = M; i <= N; i++) {
		if(A[i] == 1)
			cout << i << ' ';
	}


	


}