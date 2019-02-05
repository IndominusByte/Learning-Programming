#include <stdio.h>

int main(int argc , char* argv[]){
  int number,prime;
  printf("input number bro : ");
  scanf("%d",&number);

  for (int i = 2; i < number; i++){
    if(number%i == 0)
      prime = 1;
  }

  if (prime == 1)
    printf("your number is not prime\n");
  else
    printf("ohh nice !\n");
}
