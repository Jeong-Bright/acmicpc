#include <bits/stdc++.h>
#define call ios_base::sync_with_stdio(0); cin.tie(0);
#define MX 2000005
#define MAX 0x7ffffff
#define ll long long
using namespace std;

int func1(int x, int y, int z) {
	
	if (x == 0) return 0;
	int h = 1<<(x-1);

	if (y < h && z < h) return func1(x - 1, y, z);
	if (y < h && z >= h) return h*h + func1(x - 1, y, z-h);
	if (y >= h && z < h) return 2*h*h + func1(x - 1, y-h, z);
	return 3 * h * h + func1(x - 1, y - h, z - h);


}

int main() {
	call;
	int A, B, C;
	cin >> A >> B >> C;
	cout << func1(A, B, C);

}