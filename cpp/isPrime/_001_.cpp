#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n){
    if(n<2) return false;
    // if(n%2 == 0) return true;

    // int root = sqrt(n); // square root of n

    for(int i = 2; i <= n; i += 1){
        if(n%i == 0) return false;

    }

    return true;
}

int main(int argc, char *argv[]){

    for(int i = 1; i < argc; i++){
        if( isPrime( atoi(argv[i]) ) ){
            cout<<"\tPrime!\n"<<endl;
        } else {
            cout<<"\tNOT a Prime :(\n\n";
        }
    }

    return 0;
}

