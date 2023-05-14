#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define call ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MX 2000005
#define MAX 0x7ffffff
#define endl '\n'
typedef long long ll;
int A[1005][1005];
int dist[1005][1005];
int nx[4] = { 1,0,-1,0 };
int ny[4] = { 0,1,0,-1 };
int temp, T;

int main() {
	call;
	cin >> temp >> T;
	queue<pair<int, int>> Q;
	for (int i = 0; i < T; i++) {
		for (int j = 0; j < temp; j++) {
			cin >> A[i][j];
			if (A[i][j] == 1) 
			Q.push({ i,j });
			
			if (A[i][j] == 0) 
			dist[i][j] = -1;
			
		}
	}
	while (!Q.empty()) {
		auto cur = Q.front();Q.pop();
		for (int dir = 0; dir < 4; dir++) {
			int x = cur.first + nx[dir];
			int y = cur.second + ny[dir];
			if (x < 0 || x >= T || y < 0 || y >= temp) continue;
			if (dist[x][y] >= 0) continue;
			dist[x][y] = dist[cur.first][cur.second] + 1;
			Q.push({ x,y });
		}
}	
	int sum = 0;

	for (int i = 0; i < T; i++) {
		for (int j = 0; j < temp; j++) {
			if (dist[i][j] == -1) {
				cout << -1;
				return 0;
			}
			sum = max(sum, dist[i][j]);
		}
	}

	cout << sum;
}