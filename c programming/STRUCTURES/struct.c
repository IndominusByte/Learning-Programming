#include <stdio.h>
#include <stdlib.h>

struct date{
  int month;
  int day;
  int year;
};

int main(){
  struct date *ptr;

  ptr = malloc(sizeof(struct date));

  ptr->month = 12;
  ptr->year = 2019;
  ptr->day = 8;

  printf("month : %d , day : %d , year : %d \n",ptr->month,ptr->day,ptr->year);
}

