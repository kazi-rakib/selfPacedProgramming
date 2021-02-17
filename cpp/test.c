#include <stdio.h>
#include <time.h>

int main(){

  time_t t;

  printf("years since January 1, 1970 = %0.2lf\n", (double) time(&t)/(3600*24*365) );

  return 0;
}

