#include <iostream>

using namespace std;

int main(int argc, char *argv[]){

  char *filename;

  filename = argv[1];

  if( !remove(filename) ){
    cout<<"File removed successfully!\n"<<endl;
  } else {
    perror("Something went wrong ");
    return 1;
  }


  return 0;
}