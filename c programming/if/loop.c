#include <stdio.h>

int main(){
  enum day {senin,selasa,rabu,kamis,jumat,sabtu,minggu};

  for(enum day hitung = senin; hitung <= minggu; hitung++){
    if(hitung == kamis)
      break;
    printf("day is %d",hitung);
  }
}
