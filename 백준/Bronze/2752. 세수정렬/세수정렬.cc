#include <bits/stdc++.h>
using namespace std;


void sort(int A[], int len){
	int i, j, temp;

	for (i = 0; i < len; i++) {
		for (j = 0; j < len - i - 1; j++) {
			if (A[j] > A[j + 1]) {
				temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
			}
		}
	}

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int i, j;

	int A[105] = {};

	for (i = 0; i < 3; i++) {
		cin >> A[i];
	}

	sort(A, 3);

	for (i = 0; i < 3; i++) {
		cout << A[i] << ' ';
	}
}