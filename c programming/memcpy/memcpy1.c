#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char *ptr;
  ptr = malloc(10);
  strcpy(ptr,"dewantara");
  printf("%s\n",ptr);
  memcpy(ptr,"pradipta",sizeof("pradipta"));
  printf("%s\n",ptr);
}
