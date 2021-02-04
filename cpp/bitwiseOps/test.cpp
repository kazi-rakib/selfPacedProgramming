#include <iostream>

using namespace std;

int main(int argc, char *argv[]){

  int res = 0, n = 16;

  for(int i = 0; i <= n; i++){
    if( !(i % 4) ){
      printf("--------------\n");
      printf("(^) = %4d\n\n", res);
      res = 0;
    }
    printf("\t %4d\n", i);
    res = res ^ i;
  }
  return 0;
}
