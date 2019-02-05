#include <stdio.h>
#include <stdlib.h>

void square(int *x){
  *x = *x*2;
}

int main(){
  int *x = malloc(sizeof(int));
  *x = 10;

  square(x);
  printf("sesudah %d\n",*x);
  free(x);
}
