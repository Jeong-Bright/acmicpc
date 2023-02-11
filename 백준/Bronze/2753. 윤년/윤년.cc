#include <iostream>
using namespace std;

bool tf(int a){
	if(a % 4 == 0 && (a % 100 != 0 || a % 400 == 0))
	return true;
	else
	return false;
}

int main() {
	
	int y;
	cin >> y;
	cout << tf(y);	
	
	
}
