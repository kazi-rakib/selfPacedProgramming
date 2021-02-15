#include <iostream>
#include <cstring>

using namespace std;

int main(){

  // this is not allowed
  // char *s = "Bangladesh";
  char s[] = "Bangladesh";
  char *pt_s;

  pt_s = s;

  cout << s << endl;
  cout << pt_s << endl;
  cout << *pt_s << endl;

  char ara[20];
  strcpy(ara, "Bangladesh");
  cout << ara << endl;


  return 0;
}