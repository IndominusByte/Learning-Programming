#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct item{
  char *name;
  int quantity;
  int price;
  float amount;
};

void read();
void print();

int main(){
  struct item *fun;
  char *lol;
  
  fun->name = malloc(8);
  lol = malloc(8);
  strcpy(lol,"ABCD");
  
  read(fun);
  print(fun);
  free(fun->name);
  free(lol);
}

void read(struct item *ptr){
  printf("masukan quantity : ");
  scanf("%d",&ptr->quantity);
  printf("masukan price : ");
  scanf("%d",&ptr->price);
  getchar();
  printf("masukan nama : ");
  fgets(ptr->name,8,stdin);
}

void print(struct item *prin){
  prin->amount = prin->price * prin->quantity;
  printf("\nname : %c\n",*prin->name+1);
  printf("quantity : %d\n",prin->quantity);
  printf("price : %d\n",prin->price);
  printf("amount : %.2f\n",prin->amount);
}
