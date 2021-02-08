#include <iostream>

using namespace std;

// int gcd(int a, int b);

int main(int argc, char** argv){


  struct rational {
    int p, q;
  };
  struct rational r;

 /** or most preferably */
 typedef struct {
   int p, q;
 } rational_2;
 rational r2;

  r.p = 2;
  r.q = 3;
  r2.p = 2;
  r2.q = 3;


  cout << r.p << " " << r.q << endl;
  cout << r2.p << " " << r2.q << endl;

  return 0;
}

