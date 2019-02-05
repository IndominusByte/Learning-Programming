#include <stdio.h>

int main(){
  int i = 90;
  float f = 2.3;
  char ch = 'K';

  void *ptr;

  ptr = &i;
  printf("value i : %d\n",*(int*)ptr);
  ptr = &f;
  printf("value f : %2.f\n",*(float*)ptr);
  ptr = &ch;
  printf("value of char : %c\n",*(char*)ptr);
}
