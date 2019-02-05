#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char lol[] = "haloo";
  char *name = NULL;
  int test = 60,*ptr;

  name = malloc(8);
  strcpy(name,"jason");
  printf("%s -- address %p\n",name,name);

  name = realloc(name,25);
  strcat(name,".com");
  printf("%s -- address %p\n",name,name);

  free(name);
  name = lol;
  printf("%s -- address %p\n",name,name);
  ptr = &test;
  printf("%d -- address %p\n",*ptr,ptr);

}
