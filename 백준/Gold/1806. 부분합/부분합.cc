#include <bits/stdc++.h>
using namespace std;
int n;
int b[100005];

bool desc(int a, int b) {
	return a > b;
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0), std::cout.tie(0);

	int j = 0; int s = 0;
	int n; cin >> n; int M; cin >> M;
	int sum = 0x7fffffff;

	for (int i = 0;i < n;i++) {
		cin >> b[i];

	}
	int sum1 = b[0];
	for (int i = 0; i < n;i++) {

		while (j < n && sum1 < M) {
			j++;
			if (j != n) sum1 += b[j];
		}
		if (j == n) break;
		sum = min(sum, j - i + 1);
		sum1 = sum1 - b[i];
	}
	if (sum == 0x7fffffff) sum = 0;
	std::cout << sum;

}