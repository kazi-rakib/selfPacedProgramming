#include <stdio.h>

int sum(int a, int b, int c){
  return a+b+c;
}


int main(){

  int res = sum(2, 3, 4);
  printf("%d\n", res);

  return 0;
}
