#include <string>
#include <vector>

using namespace std;
int A[10000005];

int solution(int num, int k) {
    int answer = -1;
    string s = to_string(num);
    int n = 0;
    for (int i = s.length(); i >= 1; i--) {
        A[i] = num % 10;
        num /= 10;
    }

    for (int i = 1; i <= s.length(); i++) {
        if (A[i] == k) {
            answer = i;
            break;
        }
    }
    
    return answer;
}