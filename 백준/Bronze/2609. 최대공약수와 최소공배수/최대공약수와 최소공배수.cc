#include <iostream>
using namespace std;

int gcd(int a, int b){
	if(b == 0) return a;
	else return gcd(b, a%b);
	
}

int main() {
	int z,x;
	cin >> z >> x;
	
	gcd(z,x);
	cout << gcd(z,x)<<'\n';
	cout << z*x/gcd(z,x);
	
	
	
	
}