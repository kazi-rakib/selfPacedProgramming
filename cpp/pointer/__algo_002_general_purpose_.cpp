#include <iostream>

using namespace std;

int ascending(const void *n1, const void *n2){
  return *(int*)n1 - *(int*)n2;
}
int descending(const void *n1, const void *n2){
  return *(int*)n2 - *(int*)n1;
}

void print(const int* values, int length){
  cout << "\n";
  for(int i = 0; i < length; i++){
    cout << "\t" << values[i] ;
  }
  cout << endl;
}

int* query(int *key, const int* base, int n, int (*compare)(const void*, const void*), int size=sizeof(int)){
  cout << "Find a key: " ;
  cin >> *key;
  // now let's find the key
  int *item;

  item = (int*) bsearch(key, base, n, size, compare);

  if(item != NULL){
    cout << "Item Found!\n";
  }else {
    cout << "Item NOT found :( \n";
  }

  return item;
}

int main(int argc, char** argv){

  int values[] = {65, -1, 3, 34, 200};
  int n=5, *item, *key;

  print(values, n);

  qsort(values, n, sizeof(int), &ascending);
  print(values, n);
  query(key, values, n, ascending);
  query(key, values, n, descending);

  qsort(values, n, sizeof(int), descending);
  print(values, n);

  return 0; // successful !
}

