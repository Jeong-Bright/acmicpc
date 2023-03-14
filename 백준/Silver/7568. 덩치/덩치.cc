#include <iostream>
using namespace std;

int main() {

	int N;
	int arr[51][2] = {};
	int result[51] = {};

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> arr[i][0] >> arr[i][1];
		result[i] = 1;
	}

	for (int i = 0; i < N;i++) {
		for (int j = 0; j < N; j++) {
			if (arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1])
				result[i]++;
		}
	}

	for (int i = 0; i < N;i++) {
		cout << result[i] << ' ';
	}

}