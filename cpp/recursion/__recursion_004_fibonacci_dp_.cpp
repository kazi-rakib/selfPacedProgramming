#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

int calls = 0;
int dp[50];

int fibo(int n){
    calls++;

    if(dp[n] != 0) return dp[n];

    if(n == 1 || n == 2) return 1;

    dp[n] = fibo(n-1) + fibo(n-2);
    return dp[n];
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

  dp[1] = 1;
  dp[2] = 1;

  int N = fibo(n);
  cout<<"The "<<n<<orderOf<<" fibonacci number: "<<N<<endl;
  cout<<"recursed: "<<calls<<" times\n\n";
  calls = 0;

  for(int i = 1; i<=n; i++){
    printf(" %3d", fibo(i));
  }

  cout<<"\t called: "<<calls<<endl<<endl;

  return EXIT_SUCCESS;
}
