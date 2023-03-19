#include <bits/stdc++.h>
using namespace std;


void sort(int A[], int len){
	int i, j, temp;

	for (i = 0; i < len; i++) {
		for (j = 0; j < len -  1; j++) {
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
	int N;
	cin >> N;
	int A[1005] = {};

	for (i = 0; i < N; i++) {
		cin >> A[i];
	}

	sort(A, N);

	for (i = 0; i < N; i++) {
		cout << A[i] <<'\n';
	}
}