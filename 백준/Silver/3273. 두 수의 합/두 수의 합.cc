#include <bits/stdc++.h>
using namespace std;
int n;
int b[100001];

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);


	
	int sum = 0;
	cin >> n;
	for (int i = 0;i < n; i++) {
		cin >> b[i];
	}
	sort(b, b + n);

	int x;
	cin >> x;
	int l = 0; int s = n - 1;
	while (l < s) {

		if (b[l] + b[s] == x) sum++;
		if (b[l] + b[s] > x) s--;
		else l++;

	}

	cout << sum;

}