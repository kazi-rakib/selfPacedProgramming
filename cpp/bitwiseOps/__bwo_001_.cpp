#include <iostream>

using namespace std;

int missingInteger(int *ara, int len);

int main(int argc, char **argv){

  int ara[20];
  // assignment
  for (int i = 1; i < argc; i++) ara[i-1] = atoi(argv[i]);
  // for (int i = 1; i < argc; i++) cout<<ara[i-1]<<"\t";

  printf("The missing natural number is \t %d\n\n", missingInteger(ara, argc-1));

  return 0;
}

int missingInteger(int ara[], int length){
  // find through bitwise operation
  int i, res = 0;
  for (i = 1; i <= length; i++){
    res  = res ^ ara[i-1] ^ i;
  }

  return res^i;
}
