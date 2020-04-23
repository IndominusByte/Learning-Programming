#include <stdio.h>
char sum(char *ptr){
  int jumlah = 0;
  while(*ptr != '\0'){
    *ptr++;
    jumlah++;
  }

  return jumlah;
}

int main(){
char *ptr,lol[20] = {'a','b','c'};
ptr = lol;
printf("lol");
printf("total dari lol : %d\n",sum(ptr));
}
