#include <iostream>
using namespace std;
int main(){
    int N; char a; int b=0;    cin >> N;
    for(int i = 0 ; i < N ; i++){
        cin >> a;
        b += a - 48;

    }
    cout << b;
}