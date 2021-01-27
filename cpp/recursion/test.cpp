#include <iostream>

#define ll long long

using namespace std;


void recurse(){
    
    static int count = 1;
    if (count > 5){
        // return;
    }

    printf("Counting forward: %d\n", count);
    count++;
    recurse();
    printf("Counting backword: %d\n", --count);    
}

int main(int argc, char *argv[]){

    // your code ...
    // recurse();
    
    // cout<<" int     :"<<sizeof(int)<<endl;
    // cout<<"long     :"<<sizeof(long)<<endl;
    // cout<<"long int :"<<sizeof(long int)<<endl;
    // cout<<"long long:"<<sizeof(long long)<<endl;
    // cout<<"ll       :"<<sizeof(ll)<<endl;

    char name[][] = { "rakib", " hasan" };

    cout<<name[0]<<name[1]<<endl;

    return 0;
}

