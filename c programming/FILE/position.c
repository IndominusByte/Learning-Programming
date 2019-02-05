#include <stdio.h>

int main(){
  FILE *f;

  f = fopen("file.txt","w+");
  fputs("hi nyoman",f);
 
  fseek(f,0,SEEK_SET);
  fputs("my name is",f);
  fclose(f);
}
