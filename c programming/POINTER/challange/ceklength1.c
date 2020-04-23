#include <stdio.h>

int hitung(char *ptr){
  int result;
  while(*ptr){
    *ptr++;
    result+=1;
  }
  return result;
}
int main(){
  printf("jumlah string ini adalah : %d\n",hitung("nyoman pradipta"));
}
