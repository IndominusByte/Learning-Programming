#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
  char *ptr;
  ptr = malloc(10);
  strcpy(ptr,"hello");
  printf("%s",ptr);
  memcpy(ptr,"ikeh",sizeof(ptr)+1);
  printf("%s",ptr);

}
