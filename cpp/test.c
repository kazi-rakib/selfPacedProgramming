#include <stdio.h>

int main(){

  int n=1;

  while(n != 0){
    printf("Input a number: ");
    scanf("%d", &n);

    switch(n){
      case 1:
        printf("One time\n");
        break;
      case 2:
        printf("Two times\n");
        break;
      case 3:
        printf("Three times\n");
        break;
      case 4:
        printf("Four times\n");
        break;
      default:
        printf("Many times\n");
    }

    printf("\n\t---------------\n\n");
  }

  return 0;
}