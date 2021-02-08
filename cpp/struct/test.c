#include <stdio.h>

// int gcd(int a, int b);

int main(int argc, char** argv){


  // struct rational {
  //   int p, q;
  // };
  // struct rational r;

 /** or most preferably */
 typedef struct {
   int p, q;
 } rational;
 rational r;

  r.p = 2;
  r.q = 3;


  printf("%d %d\n", r.p, r.q );

  return 0;
}

