#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

  union ut {
    int id;
    char name[20];
  } uv;

  // union ut uv;
  uv.id = 12211142;
  strcpy(uv.name, "Rakib hasan");
  cout << uv.id << " : " << uv.name << endl;

  return 0;
}
