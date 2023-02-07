#include <iostream>
#include <string>
using namespace std;

int main() {
	
	string N;
	while(1){
	int width;
	cin >> N;
	if(N == "0") break;
	width = N.size() + 1;
	for(int i =0;i<N.size();i++){
		if(N[i] == '1')
		width += 2;
		else if (N[i] == '0')
		width += 4;
		else width += 3;
	}
	cout << width << '\n';
	}
	
}