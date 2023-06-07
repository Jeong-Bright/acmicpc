#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<int> n) {
    sort(n.begin(), n.end());
    int a, b;
    a = n[0] * n[1];
    b = n[n.size() -1] * n[n.size() -2];
    int answer = max(a, b);
    return answer;
}