#include <iostream>

using namespace std;

int main(int argc, char** argv){

  int n; 

  for(int i = 1; i < argc; i++){
    if( atoi(argv[i]) & 1 ){
      printf("%4d ==> ODD\n\n", atoi(argv[i]));
    } else {
      
      printf("%4d ==> EVEN!\n\n", atoi(argv[i]));
    }
  }

  return 0;
}