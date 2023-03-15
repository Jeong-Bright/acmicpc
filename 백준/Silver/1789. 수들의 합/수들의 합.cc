#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {

	ll S;
	ll sum = 0;
	ll i = 1;
	cin >> S;

	while (sum <= S) {
		sum += i;
		if (sum + i >= S) break;
		i++;
	}

	cout << i;


}