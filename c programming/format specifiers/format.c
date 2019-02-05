#include <stdio.h>

int main(){
  int var1 = 100;
  float var2 = 33.12;
  double var3 = 82.e+23;
  char var4 = 'N';
  _Bool var5 = 1;


  printf("integer var = %i\n",var1);
  printf("floating var = %f\n",var2);
  printf("double var = %e\n",var3);
  printf("double var = %g\n",var3);
  printf("char var = %c\n",var4);
  printf("bool var = %i\n",var5);
  return 0;
}
