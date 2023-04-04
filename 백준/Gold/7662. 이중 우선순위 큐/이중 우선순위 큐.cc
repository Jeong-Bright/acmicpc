#include <bits/stdc++.h>
#define call ios_base::sync_with_stdio(0); cin.tie(0);
#define MX 2000005
#define MAX 0x7ffffff
using namespace std;
int main() {

	int N,T;
	cin >> N;
	while (N--) {
		char Q;
		multiset<long long> s;
		cin >> T;
		while(T--){
			cin >> Q;
				if (Q == 'I') {
					int l;
					cin >> l;
					s.insert(l);
			}
				if (Q == 'D') {
					int l;
					cin >> l;	
					if (s.empty()) continue;
					if (l == 1) {
						s.erase(prev(s.end()));
					}
					else if (l == -1) {
						s.erase(s.begin());
					}
				}
		}

		if (s.empty()) cout << "EMPTY" << '\n';
		else
			cout << *prev(s.end()) << ' ' << *s.begin() << '\n';
	}

}