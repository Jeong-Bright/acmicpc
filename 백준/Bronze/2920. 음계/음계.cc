#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define call ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MX 2000005
#define MAX 0x7ffffff
#define endl '\n'
typedef long long ll;
int A[105];
int B[105];
int main() {
	call;
	for (int i = 1; i <= 8;i++) {
		A[i] = i;
		B[9 - i] = i;
	}
	int des = 0; int asc = 0; int T;

	for (int i = 1; i <= 8; i++) {
		cin >> T;
		if (A[i] == T) {
			asc++;
		}
		if (B[i] == T) {
			des++;
		}
	}

	if (asc == 8) {
		cout << "ascending";
	}
	else if (des == 8) {
		cout << "descending";
	}
	else cout << "mixed";


}