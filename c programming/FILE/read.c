#include <stdio.h>
#include <stdlib.h>

struct item{
  FILE *fp;
  char *c;
  int lol;
};

int main(){
  struct item *ptr;

  ptr->fp = fopen("file.txt","r");
  if(ptr->fp == NULL)
    printf("there is no file !\n");

  ptr->lol = 65;
  printf("%c\n",ptr->lol);

  ptr->c = malloc(60);
  /*
  while((*ptr->c = fgetc(ptr->fp)) != EOF)
    printf("%c",*ptr->c);

  */
  fgets(ptr->c,60,ptr->fp);
  ptr->c += 2;
  printf("from fgets : %c\n",*ptr->c);

  fclose(ptr->fp);
}
