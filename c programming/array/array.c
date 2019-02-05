#include <stdio.h>

int main(){
  
  float nilai[10],hasil;
  int sum,test[10] = {[3] = 20,[0] =2};

  printf("masukin 10 nilai \n");
  for (int i = 1; i < 11; i++){
    printf("%d >> ",i);
    scanf("%f",&nilai[i]);
    sum += nilai[i];
  }

  hasil = (float)sum/10;
  printf("averagenya : %.2f\n",hasil);
}
