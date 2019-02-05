#include <stdio.h>

int main(){
  /*
  int number = 0;
  int *pnumber = NULL;

  number = 10;
  printf("value address number %p\n",&number);
  printf("number value %d\n",number);

  pnumber = &number;
  printf("pnumber address %p\n",&pnumber);
  printf("pnumber size %zu byte\n",sizeof(pnumber));
  printf("pnumber values address %p\n",pnumber);
  printf("value pointed to %d\n",*pnumber);
  printf("==============================\n");
*/
  long num1 = 0L;
  long num2 = 0L;
  long *pnum = NULL;

  pnum = &num1;
  ++*pnum;
  *pnum += 1;

  num2 += 1;
  pnum = &num2;
  *pnum += num1;

  printf("num1 : %ld , num2 : %ld ,pnum : %ld , pnum + num2 : %ld\n",num1,num2,*pnum,*pnum + num2);
}
