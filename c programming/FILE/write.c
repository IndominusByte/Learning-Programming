#include <stdio.h>

int main(){
  FILE *f;
  int c;

  f = fopen("file.txt","w+");

  for(c = 33; c < 127; c++)
    fputc(c,f);

  fputs("tambahan",f);
  fputs("kedua",f);

  fprintf(f,"%s-%s-%d","-dari","prinntf",10);
  fclose(f);
}
