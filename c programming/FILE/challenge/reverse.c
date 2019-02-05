#include <stdio.h>
#include <ctype.h>

int main(){
  FILE *f,*tmp;
  int i,chr;

  f = fopen("file.txt","r");
  fseek(f,0,SEEK_END);
  i = ftell(f);
  tmp = fopen("tmp.txt","w+");
  while(i != 0){
    i--;
    fseek(f,i,SEEK_SET);
    chr = fgetc(f);
    fputc(chr,tmp);
  }
  fclose(f);
  fclose(tmp);

}
