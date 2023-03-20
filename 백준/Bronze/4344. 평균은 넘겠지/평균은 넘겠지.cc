#include <bits/stdc++.h>
#define call ios::sync_with_stdio(0); cin.tie(0);
using namespace std;

int main() {

	call;
	
	int A,C;
	cin >> C;
	int N[1005];
	int sum = 0;
	double sum1 = 0;
	while(C > 0){
		cin >> A;

	for (int i = 0; i < A; i++) {
		cin >> N[i];
		if (N[i] < 0 || N[i] > 100) break;
		sum += N[i];
		if (i == A-1) sum = sum / A;
	}

	for (int i = 0; i < A; i++) {
		if (sum < N[i])
			sum1++;
	}

	double sum2 = (sum1 / A) * 100;
	printf("%.3f%s\n", sum2, "%");
	sum = 0;
	sum1 = 0;
	sum2 = 0;

	C--;
	}
	

}