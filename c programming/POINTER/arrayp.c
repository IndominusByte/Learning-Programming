#include <stdio.h>

int sum(int *ptr,int jumlah){
  int sum = 0;
  int *const ptrjml = ptr + jumlah;

  for(; ptr < ptrjml; ptr++)
    sum += *ptr;

  return sum;

}

int main(){
  int lol[20] = {8,2,3,4,5,6,7};
  int *ptr = NULL,*ptrjml = NULL;

  ptr = lol;
  printf("sum dari lol %d\n",sum(ptr,20));
  printf("adalah : %d\n",*(ptr+2));
  ptr+=3;
  printf("adalah : %d\n",*ptr);
}
