#include <bits/stdc++.h>
#define call ios_base::sync_with_stdio(0); cin.tie(0);
#define MX 2000005
#define MAX 0x7ffffff
#define ll long long
using namespace std;

ll func1(ll x, ll y, ll z) {
	ll sum = 1;
	if (y == 1) return x % z;
	ll h = y / 2;
	sum = func1(x, h, z);
	sum = sum * sum % z;
	if (y % 2 == 0) return sum;
	return sum * x % z;

}

int main() {

	int A, B, C;	
	cin >> A >> B >> C;
	cout << func1(A,B,C);


}
	



	

