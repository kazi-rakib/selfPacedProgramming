#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n){
    if(n<2) return false;
    if(n == 2) return true;
    if(n%2 == 0) return false;

    int root = sqrt(n); // square root of n

    for(int i = 3; i <= root; i += 2){
        if(n%i == 0) return false;

    }

    return true;
}

int main(int argc, char *argv[]){

    /* CONSOLE CASE:
    for(int i = 1; i < argc; i++){
        if( isPrime( atoi(argv[i]) ) ){
            cout<<"\tPrime!\n"<<endl;
        } else {
            cout<<"\tNOT a Prime :(\n\n";
        }
    }
    */
    int n;
    while( cin>>n ){
        if(isPrime(n)){
            cout<<"\tPrime!\n"<<endl;
        } else {
            cout<<"\tNOT a prime :(\n\n";
        }
    }

    return 0;
}

