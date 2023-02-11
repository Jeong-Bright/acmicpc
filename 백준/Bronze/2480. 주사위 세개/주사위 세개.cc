#include <iostream>
using namespace std;

int main(){
	
	int a,b,c;
	int k = 0;
	cin >> a >> b >> c;
	
	if(a == b && a == c && b == c){
		k = 10000+a*1000;
		cout << k;
	}
	else if(a == b || a == c ){
		k = 1000+a*100;	
		cout << k;
	
	}
	else if(b == c){
		k = 1000+b*100;	
		cout << k;
	}	else if(a>b && a>c){
		k = a*100;
		cout << k;

	}
	else if(b>c && b>a){
		k = b*100;
		cout << k;

	}
	else if(c>a && c>b){
	
		k = c*100;
		cout << k;
}
}