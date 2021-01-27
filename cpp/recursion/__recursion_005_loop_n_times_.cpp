#include <iostream>

using namespace std;

int calls = 0;

int sum(int n){
  calls++;
  if(n == 1) return 1;
  
  return n + sum(n-1);
}

int main(int argc, char *argv[]){

  int n = atoi(argv[1]);

  cout<<"Sum of "<<n<<" natural number: \t"<<sum(n)<<endl;
  cout<<"recursed: \t"<<calls<<" times"<<endl;
  calls = 0;

  return EXIT_SUCCESS;
}
