#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct number{
  int *p1;
  int *p2;
  int *p3;
  char lol[20];
  char *ikkeh;
};

int main(){
  struct number *ptr;
  int i;
  ptr = malloc(sizeof(struct number));

  ptr->p1 = malloc(sizeof(int));
  *ptr->p1 = 3;
  ptr->p2 = malloc(sizeof(int));
  *ptr->p2 = 10;

  ptr->p3 = &i;
  *ptr->p3 = 2019;

  strcpy(ptr->lol,"halo");
 
  ptr->ikkeh = "halo";

  printf("angka p1 %d , angka p2 %d , angka p3 %d\n",*ptr->p1,*ptr->p2,*ptr->p3);
  printf("%c\n",ptr->lol[3]);
  ptr->ikkeh+=2;
  printf("%c\n",*ptr->ikkeh);
}
