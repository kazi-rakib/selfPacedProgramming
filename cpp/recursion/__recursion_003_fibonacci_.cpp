#include <iostream>
#include <cstring>

using namespace std;

long long calls = 0;

int fibonacci(int n){
  calls++;

  if(n == 1 || n == 2){
    return 1;
  }

  return fibonacci(n-1) + fibonacci(n-2);
}

int main(int argc, char *argv[]){

  int n = atoi(argv[1]);
  char orderOf[3];

  if(argc == 1){
    perror("Please pass an argument");
    return EXIT_FAILURE;
  }


  if(n == 1){
    strcpy(orderOf, "st");
  }else if(n == 2){
    strcpy(orderOf, "nd");
  }else if(n == 3){
    strcpy(orderOf, "rd");
  }else {
    strcpy(orderOf, "th");
  }

  int N = fibonacci(n);
  cout<<"The "<<n<<orderOf<<" fibonacci number: "<<N<<endl;
  cout<<"recursed: "<<calls<<" times\n\n";
  calls = 0;

  for(int i = 1; i<=n; i++){
    printf(" %3d", fibonacci(i));
  }

  cout<<"\t called: "<<calls<<endl<<endl;

  return EXIT_SUCCESS;
}
