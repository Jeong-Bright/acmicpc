#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string k;
	cin >> k;
	for (char i = 'a'; i <= 'z'; i++) {
		int cnt = 0;

		for (auto c : k) 
			if (i == c) cnt++;
		
		cout << cnt << ' ';


	}
}