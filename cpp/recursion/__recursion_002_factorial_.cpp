#include <iostream>

using namespace std;

int called = 0;

int factorial(int n){
  called++;
  if (n == 0) return 1;

  return n * factorial(n-1);
}

int main(int argc, char *argv[]){

  if (argc == 1) cout<<"Please pass at least an argument to find factorial of!"<<endl;

  for(int i = 1; i < argc; i++){
    cout<<argv[i]<<"! = "<<factorial(atoi(argv[i]))<<endl;
    cout<<"recursed: \t"<<called<<" times\n"<<endl;
    called = 0;
  }

  return EXIT_SUCCESS;
}
