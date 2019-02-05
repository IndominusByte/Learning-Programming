#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  srand ( time(NULL) );
  int guess = rand() % 21;  
  int inputan,tries = 5;

  do{
  printf("tebak nomor dari 0 - 20\n");
  printf(">> ");
  scanf("%d",&inputan);
    if(tries == 0){
      printf("coba lain kali yak !");
      break;
    }
    if(inputan != guess){
      printf("tinggal %d percobaan\n",tries);
      --tries;
      continue;
    }else{
      printf("correct ! selamat bro");
      break;
    }
  }while(tries != -1);

}
