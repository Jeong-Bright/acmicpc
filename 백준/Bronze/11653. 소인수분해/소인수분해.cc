#include <bits/stdc++.h>
#define call ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MX 2000005
#define MAX 0x7ffffff
#define ll long long
#define endl '\n'
using namespace std;
vector<int> v;	
int i = 2;
int arr[MX];
	int main(){
		call;
		int N; cin >> N;
		while (N > 1) {
			if (N % i == 0){
				cout << i << endl;
				N = N / i;
				
				}
				else i++;
			}
	
	
	


}