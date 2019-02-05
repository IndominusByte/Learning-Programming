#include <stdio.h>

int main(){
  int input;

  printf("input angka : ");
  scanf("%d",&input);

  if(input % 2 == 0)
    printf("number even\n");
  else
    printf("number odd\n");

}
