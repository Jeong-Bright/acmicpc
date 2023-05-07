#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
int w[100001];
int v[100001];
int dp[101][100001];
 
 
int main(void) {
    cout.tie(NULL);
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int N, K;
    int result = 0;
 
    cin >> N >> K;
 
    for (int i = 1; i <= N; i++) {
        cin >> w[i];
        cin >> v[i];
    }
 
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= K; j++) {
            //현재 물건 안넣고 이전 값 vs 
            //현재 물건 넣기 위해 현재 물건의 무게만큼 빼주고(그래야 무게 초과 안되고 자리가 난다) 이전 값의 최댓값을 넣으면서 현재 가치 더함.
            //둘 중 큰 값을 넣어준다.
            if (w[i]<=j) dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
            
            //무게가 배낭보다 크면 그냥 복사해준다.
            else dp[i][j] = dp[i - 1][j];
        }
    }
 
 
    cout << dp[N][K];
 
    return 0;
}
