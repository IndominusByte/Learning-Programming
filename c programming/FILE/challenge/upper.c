#include <stdio.h>
#include <ctype.h>

int main(){
  FILE *r,*t;
  int i;
  r = fopen("file.txt","r");
  t = fopen("tmp.txt","w+");

  while((i = fgetc(r)) != EOF)
      fputc(toupper(i),t);

  fclose(r);
  fclose(t);
  remove("file.txt"); 
  rename("tmp.txt","file.txt");
  i = 0;
  r = fopen("file.txt","r");
  while((i = fgetc(r)) != EOF)
    printf("%c",i);
}
