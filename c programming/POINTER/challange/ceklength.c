#include <stdio.h>

int ceklen(const char *ptr){
  const char *end = ptr;
  while(*end)
    end++;

  return end - ptr;
}
int main(){
  char *str = "testing is awesome";

  printf("length is %d\n",ceklen(str));
}

