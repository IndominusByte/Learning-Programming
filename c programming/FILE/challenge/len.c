#include <stdio.h>
#include <string.h>

int main(){
  FILE *f;
  int count = 0,i;
  f = fopen("file.txt","r");

  while((i = fgetc(f)) != EOF)
      count++;

  fclose(f);
  printf("number of byte : %d\n",count-1);
  count = strlen("testing is fun");
  printf("number of byte : %d\n",count);
}
