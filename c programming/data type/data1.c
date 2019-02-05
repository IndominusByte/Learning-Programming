#include <stdio.h>

int main(){
  int test = 11;
  float test1 = 55.55;
  double test2 = 888.9998989898e+11;
  _Bool varbol = 1; /*1 true and 0 is false*/

  enum hari {senin = 1, selasa , rabu , kamis , jumat , sabtu , minggu}; /* deklarasi variable enum */
  enum hari today; /* inisialisasi */ 
  
  today = selasa;
  printf("hari ke : %d",today);
}
