#include <bits/stdc++.h>
#define call ios::sync_with_stdio(0); cin.tie(0);
#define MX 2000005
#define MAX 0x7ffffff
using namespace std;
int A[MX];
vector<int> v1, v2;
vector<bool> prime(MX, 0);

int main() {
	call;
	int N,M;
	cin >> N >> M;
	int s=0;
	int s1 = 0;
	for (int i = 0; i < N; i++) cin >> A[i];

	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			for (int z = j + 1; z < N; z++) {
				s = A[i] + A[j] + A[z];
				
				if(s <= M) s1 = max(s1, s);
			}

		}
		if (s == M)
		{
			cout << s; break;
		}
	}
	if(s != M) cout << s1;
	


}
