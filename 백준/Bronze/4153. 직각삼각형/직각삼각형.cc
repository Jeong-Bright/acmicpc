#include <iostream>
using namespace std;

int main() {
 int a,b,c;
 int tmp1,tmp2;
  while(1){
      cin >> a >> b >> c;
      if(a>c) {
      	tmp1 = a;
      	a = c;
      	c = tmp1;
	  }
      
      if(b>c){
	  
      	tmp2 = b;
      	b = c;
      	c = tmp2;
      }	
      	
      if(a == 0 && b == 0 && c == 0) return 0;
      int x = a*a; int y = b*b; int z = c*c;
      if(x+y == z) cout << "right" << endl;
      else cout << "wrong" << endl;
  }
  }
    
    
