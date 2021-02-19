#include <stdio.h>
#include <string.h>

int main(){

  typedef union {
    int id;
    char name[20];
  } student;

  student st;

  st.id = 17201142;
  // st.name = "Rakib Hasan";
  strcpy(st.name, "Rakib Hasan");
  
  printf("%d %s\n", st.id, st.name);

  return 0;
}

