#include <bits/stdc++.h>
#define call ios_base::sync_with_stdio(0); cin.tie(0);
#define MX 2000005
#define MAX 0x7ffffff
#define ll long long
#define endl '\n';
using namespace std;
int A[MX];
int main() {
	call;
	
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) cin >> A[i];

	sort(A, A + N);
	for (int i = 0; i < N; i++) cout << A[i] << endl
}