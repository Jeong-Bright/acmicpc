using namespace std;
#include <bits/stdc++.h>
int n;
int b[100005];

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0), std::cout.tie(0);

	int j = 0; int s = 0;
	int n; cin >> n; int M; cin >> M;
	int sum = 0x7fffffff; int sum1 = 0;

	for (int i = 0;i < n;i++) {
		cin >> b[i];

	}
	sort(b, b + n);

	for (int i = 0; i < n;i++) {

		while (j < n && b[j] - b[i] < M) j++;
		if (j == n) break;
		sum = min(sum, b[j] - b[i]);
		
	}
	
	std::cout << sum;

}