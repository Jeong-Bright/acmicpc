#include <iostream>
#define Size 5
using namespace std;
int n[Size];
int k = 1;


int abc(int z) {


	int cnt = 0;

	for (int i = 0;i < Size;i++) {
		if (z % n[i] == 0) cnt++;
		
	}

	return cnt;


}

int main() {



	for (int i = 0;i < Size;i++) 
		cin >> n[i];
	while (abc(k) < 3)
		k++;
	cout << k << '\n';


}