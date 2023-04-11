#include <bits/stdc++.h>
#define call ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MX 2000005
#define MAX 0x7ffffff
#define ll long long
#define endl '\n'
using namespace std;
vector<int> v;	

void z(int K) {
	vector<bool> prime(K + 1, true);

	for (int i = 2; i * i <= K; i++) {
		if (prime[i] == 0) continue;
		for (int j = i * i;j <=K;j += i) {
			prime[j] = false;
		}
		
	}	
		for (int i = 2; i <= K; i++) {
			if (prime[i]) v.push_back(i);
		}
	
	}
	int main(){
		call;
		int K;
		cin >> K;
		int st = 0; int en = 0;
		long long M = 0; int idx = 0;

		if (K == 1) { cout << 0; return 0; }

		z(K);
		int x = v.size();

		while (en <= x) {

			if (M < K) M += v[en++];

			else if (M >= K) {
				if (M == K) idx++;
				M -= v[st++];
			}
			if (v[st] == K)
			{
				idx++;
				break;
			}

		}
		cout << idx;

	


}