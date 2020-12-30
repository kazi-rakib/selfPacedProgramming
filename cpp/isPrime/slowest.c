#include <stdio.h>
#include <math.h>

int isPrime(int n){
    if(n<2) return 0;
    if(n==2) return 1;
    if(n%2 == 0) return 0;

    int i;
    for(i = 3; i < n; i += 2){
        if(n % i == 0) return 0;
    }
    return 1;
}

int main(int argc, char *argv[]){

    int n;

    scanf("%d", &n);
    // while( scanf("%d", &n) ){
        if(isPrime(n)) {
            printf("\tPrime!\n\n");
        } else {
            printf("\tNOT a Prime :(\n\n");
        }
    // }

    return 0;
}

