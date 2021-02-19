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

int gcdExtended(int a, int b, int* x, int* y){
  if(a == 0) {
    *x = 0;
    *y = 1;
    return b;
  }
  int x1, y1;
  int gcd = gcdExtended(b%a, a, &x1, &y1);
  *x = y1 - (b/a)*x1;
  *y = x1;

  return gcd;
}

void test();

int main(){

  // driver code
  // test();
  int x, y;
  cout << gcdExtended(30, 12, &x, &y) << " = 30*("<<x <<") + 12*("<<y<<")" << endl;
  cout << gcdExtended(12, 30, &x, &y) << " = 12*("<<x <<") + 30*("<<y<<")" << endl;
  cout << gcdExtended(54, 888, &x, &y) << " = 54*("<<x <<") + 888*("<<y<<")" << endl;
  // cout << gcdExtended(12, 30, &x, &y) << endl;
  // cout << gcdExtended(30, 12, &x, &y) << endl;

  return 0;
}

void test(){
  // test cases
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
  
}
