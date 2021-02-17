#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dice(){
  return 1 + ( rand()%6 );
}

int randomR(int upper, int lower){
  int range = upper - lower + 1;


  return lower + (rand()%range);
}

int main(){

  time_t t;
  srand( (unsigned) time(&t) ); //seed
  
  // driver code 
  int i;
  for(i = 0; i < 10; i++){
    printf(" %4d", dice());
  }
  printf("\n");
  for(i = 0; i < 10; i++){
    printf(" %4d", randomR(60, 30));
  }

  printf("\n");

  return 0;
}

