#include <stdio.h>
#include <stdlib.h>
int main(){
  char *input = NULL;
  int limit,c;

  printf("masukan size karakter : ");
  scanf("%d",&limit);
  input = malloc(limit);
  getchar();
  printf("masukan inputan : ");
  fgets(input,limit,stdin);
  printf("%s\n",input);
  free(input);
}
