#include <stdio.h>

int main(){
  char str[64];
  int i;

  printf("input some value : ");
  scanf("%d %s",&i,str);

  printf("value is %s and %d\n",str,i);
  return 0;
}
