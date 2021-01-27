#include <iostream>

using namespace std;

void revstr(char *s){
  static int i = 0;
  if(s[i] == '\0') return;
  
  i++;
  revstr(s);
  cout<<s[--i];
}

int main(int argc, char **argv){

  for(int i = 1; i < argc; i++){
    cout<<"\t";
    revstr(argv[i]);
    cout<<" | "<<argv[i]<<endl<<endl;
  }

  return EXIT_SUCCESS;
}

