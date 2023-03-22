#include <bits/stdc++.h>
#define call ios::sync_with_stdio(0); cin.tie(0);
#define MX 2000005
using namespace std;
int dat[MX];
int tail = 0; int head = 0;

void push(int x) {
	dat[tail++] = x;
}

int pop() {
	if (tail==head) return -1;
	else {
		return dat[head++];
		
	}
}

int empty() {
	if (tail == head) return 1;
	else return 0;

}

int front() {
	if (empty()) return -1;
	return dat[head];
}

int back() {
	if (empty()) return -1;
	return dat[tail - 1];
}


void size() {
	if (tail - head > 0)
		cout << tail - head << '\n';
	else cout << 0 << '\n';
}

int main() {

	call;
	int a,N;
	string z;
	cin >> N;
	for (int i = 0; i < N;i++) {
		cin >> z;
		if (z == "push"){
			cin >> a;
			push(a);		
		}
		if (z == "pop") {
			cout << pop() << '\n';
		}
		if (z == "size") {
			size();
		}
		if (z == "empty") {
			cout << empty() << '\n';
		}
		if (z == "front") {
			cout << front() << '\n';
		}
		if (z == "back") {
			cout << back() << '\n';
		}

	}

}