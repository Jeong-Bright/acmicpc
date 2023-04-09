#include <iostream>
using namespace std;
int main(){

int a,b;
cin >> a >> b;

int sum = 0;
if(b<45){
if(a==0) a=24;
sum = b+60-45;
cout << a-1 << ' ' << sum;
}
else{
sum = b-45;
cout << a << ' ' << sum;}

}