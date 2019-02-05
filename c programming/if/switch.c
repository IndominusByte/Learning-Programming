#include <stdio.h>

int main(){
  char hari;

  printf("hari apa sekarang ?");
  hari = getchar(); 

  switch(hari){
    case 's':
      printf("senin");
    break;
    default:
      printf("lol");
    break;
  }
}
