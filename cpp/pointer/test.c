#include <stdio.h>
#include <stdlib.h>

int compare(const void *n1, const void *n2){
  return *(int *)n1 - *(int *)n2;
}
int compare2(const void *n1, const void *n2){
  return *(int*)n2 - *(int*)n1;
}

int main(){

  // Application of quick sort
  int values[] = {65, 3, 34, 2, 100, -1};
  int n=6;

  int i;
  for(i=0; i < n; i++){
    printf(" %4d\t", values[i]);
  }
  printf("\n");

  qsort(values, n, sizeof(int), compare);
  for(i=0; i < n; i++){
    printf(" %4d\t", values[i]);
  }
  printf("\n");

  qsort(values, n, sizeof(int), compare2);
  for(i=0; i < n; i++){
    printf(" %4d\t", values[i]);
  }
  printf("\n");
  
  int key, *item;
  printf("Key to find: ");
  scanf("%d", &key);
  item = (int*) bsearch(&key, values, n, sizeof(int), compare2);
  
  if(item != NULL){
    printf("Item %d found!\n", *item);
  }else{
    printf("Item NOT found :(\n");
  }
  printf("\n");


  printf("find another key: ");
  scanf("%d", &key);
  item = (int*) bsearch(&key, values, n, sizeof(int), compare);
  
  if(item != NULL){
    printf("Item %d found!\n", *item);
  }else{
    printf("Item NOT found :(\n");
  }
  printf("\n");



  return 0;
}

