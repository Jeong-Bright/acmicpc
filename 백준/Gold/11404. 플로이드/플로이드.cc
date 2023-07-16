#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
#define endl '\n';
#define call ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define maxs 10000005
int T, X;

// ll gcd(int a, int b) {
//     if(a == 0) return b;
//     return gcd(b%a, a); 
// }

// ll lcm(int a, int b){
//     return a / gcd(a,b) * b;
// }
int table[105][105];
const int INF = 0x3f3f3f3f;

int main() {

    call;
    cin >> T >> X;
    for (int i = 1; i <= T; i++) {
        fill(table[i], table[i] + T + 1, INF);
    }
    for (int i = 1; i <= X; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        table[x][y] = min(table[x][y], z);
    }
    for (int i = 1; i <= T; i++) {
        table[i][i] = 0;
    }
    for (int i = 1; i <= T; i++) {
        for (int j = 1; j <= T; j++) {
            for (int k = 1; k <= T; k++) {
                table[j][k] = min(table[j][k], table[j][i] + table[i][k]);
            }
        }
    }

    for (int i = 1; i <= T; i++) {
        for (int j = 1; j <= T; j++) {
            if(table[i][j] == INF) cout << "0 ";
            else cout << table[i][j] << ' ';
        }
        cout << endl;
    }
}