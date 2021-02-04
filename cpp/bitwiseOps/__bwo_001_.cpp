#include <iostream>

using namespace std;

int missingInteger(int *ara, int len);

int main(int argc, char **argv){

  int ara[20];
  // assignment
  for (int i = 1; i < argc; i++) ara[i-1] = atoi(argv[i]);

  printf("The missing natural number is \t %d\n\n", missingInteger(ara, argc-1));

  return 0;
}

int missingInteger(int ara[], int length){
  // find through bitwise operation
  int res = 0;
  for (int i = 0; i < length; i++){
    if( !(ara[i] % 4) ){
      // res should be zero by now ?
      if(!res){
        // so we have found the missing number ??
        return res;
      }
    }
    // keep doing xor
    res ^= ara[i];
  }

  return res;
}
