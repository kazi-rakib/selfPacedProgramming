#include <iostream>

using namespace std;

#define SWAP(a, b) { \
  a ^= b; \
  b ^= a; \
  a ^= b; \
}

typedef struct {
  int p, q;
} rational;


int gcd(int a, int b);
bool isEqual(rational r1, rational r2);
rational add(rational r1, rational r2);
rational sub(rational r1, rational r2);
rational mul(rational r1, rational r2);
rational div(rational r1, rational r2);
void reduce(rational* r);

int main(int argc, char** argv){

  rational r[3];

  cout << "Input the 1st rational number (as in --> a b): " ;
  cin >> r[0].p;
  cin >> r[0].q;
  if(gcd(r[0].p, r[0].q) > 1){
    cout << "\t" << r[0].p << "/" << r[0].q << " is equivalent to ";
    reduce( &r[0] );
    cout << r[0].p << "/" << r[0].q << endl; 
  }

  cout << "Input the 2nd rational number (as in --> a b): " ;
  cin >> r[1].p;
  cin >> r[1].q;
  if(gcd(r[1].p, r[1].q) > 1){
    cout << "\t" << r[1].p << "/" << r[1].q << " is equivalent to ";
    reduce( &r[1] );
    cout << r[1].p << "/" << r[1].q << endl; 
  }

  cout << r[0].p << "/" << r[0].q << " and ";
  cout << r[1].p << "/" << r[1].q << " are : " << endl;

  cout << ( (isEqual(r[0], r[1]))? " \t":"\tNOT " ) << "equal !\n";

  // cout << gcd(39, 60) << endl;

  return 0;
}

int gcd(int a, int b){
  // Euclidean Algorithm
  if( b > a) {
    SWAP(a, b);
  } // so a is greater now
  
  int gcd;
  
  while ( a % b ){  // test if in the next round b is going to be zero 
    gcd = a % b;    // gcd is found immedietly before b == 0
    a = b;          // if b!=0 , keep doing modulus  
    b = gcd;
  }

  return gcd;
}


bool isEqual(rational r1, rational r2){
  int gcd1 = gcd(r1.p, r1.q);
  int gcd2 = gcd(r2.p, r2.q);

  if ( (r1.p/gcd1) == (r2.p/gcd2) 
        &&  (r1.q/gcd1) == (r2.q/gcd2) ){
          return true;
        } else {
          return false;
        }
}

void reduce(rational * r){
  int tmp = gcd(r->p, r->q);
  if(tmp > 1){
    // hence reducible
    r->p /= tmp;
    r->q /= tmp; 
  }

}
