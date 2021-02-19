#include <iostream>

using namespace std;


int gcd(int a, int b){
  if(b == 0 ){
    return a;
  }
  return gcd(b, a%b);
}

int gcdIterative(int a, int b){
  int tmp;

  while(b != 0){
    tmp = b;
    b = a%b;
    a = tmp;
  }
  return a;
}


int main(){

  // driver code
  cout << gcdIterative(12, 30) << endl;
  cout << gcdIterative( 30, 12) << endl;
  cout << gcdIterative(888, 54) << endl;
  cout << gcdIterative(2, 2147483647) << endl;
  cout << gcdIterative(0, 2147483647) << endl;
  cout << gcdIterative(11, 0) << endl;
  cout << gcdIterative(0, 0) << endl;
  
  cout << "------------------\n";

  cout << gcd(12, 30) << endl;
  cout << gcd( 30, 12) << endl;
  cout << gcd(888, 54) << endl;
  cout << gcd(2, 2147483647) << endl;
  cout << gcd(0, 2147483647) << endl;
  cout << gcd(11, 0) << endl;
  cout << gcd(0, 0) << endl;
  


  return 0;
}

