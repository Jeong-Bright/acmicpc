#include <bits/stdc++.h>
using namespace std;


int Rev(int a) {
	
	int revnum = 0;
	
	while (a) {
	
		revnum = revnum * 10 + a % 10;
		a = a / 10;



	}
	return revnum;

}

int main() {

	int X, Y;
	cin >> X; cin >> Y;
	cout << Rev(Rev(X)+Rev(Y));

	

}