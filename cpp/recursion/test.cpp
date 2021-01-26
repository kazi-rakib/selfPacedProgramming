#include <iostream>

using namespace std;

void recurse(){
    
    static int count = 1;
    if (count > 5){
        return;
    }

    printf("Counting forward: %d\n", count);
    count++;
    recurse();
    printf("Counting backword: %d\n", --count);    
}

int main(int argc, char *argv[]){

    // your code ...
    recurse();

    return 0;
}

