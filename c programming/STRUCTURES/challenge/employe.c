#include <stdio.h>

struct employee{
 char name[64];
 int hiredate;
 float salary;
};

int main(){
  struct employee a = {"nyoman",26,29.0},b;

  printf("masukan nama : ");
  fgets(b.name,64,stdin);
  printf("masukan hiredate : ");
  scanf("%d",&b.hiredate);
  printf("masukan salary : ");
  scanf("%f",&b.salary);
  printf("name %s hiredate %d salary %.2f\n",a.name,a.hiredate,a.salary);
  printf("name %s hiredate %d salary %.2f\n",b.name,b.hiredate,b.salary);
}
