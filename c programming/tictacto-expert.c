#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void game(char *p){
  printf("\n");
  printf("\n       |         |        \n");
  printf("   %c   |    %c    |   %c   \n",*(p),*(p+1),*(p+2));
  printf("_______|_________|_______ \n");
  printf("       |         |        \n");
  printf("   %c   |    %c    |   %c   \n",*(p+3),*(p+4),*(p+5));
  printf("_______|_________|_______ \n");
  printf("       |         |        \n");
  printf("   %c   |    %c    |   %c   \n",*(p+6),*(p+7),*(p+8));
  printf("       |         |       \n");
}
void assign(char *ptr){
   for(int i = 0; i < 10; i++){
    *ptr = 49+i;
    printf("%p-",ptr);
    ptr++;
  }

}
void banner(){
  printf("==========================================\n");
  printf("\n              TIC TAC TOE GAME             \n");
  printf("\n      PLAYER 1 ( O )  - PLAYER 2 ( X )      \n");
  printf("\n==========================================\n");
}
void check(char *cek){
  if((*(cek) == 'O' && *(cek+1) == 'O' && *(cek+2) == 'O') || (*(cek+3) == 'O' && *(cek+4) == 'O' && *(cek+5) == 'O') ||
      (*(cek+6) == 'O' && *(cek+7) == 'O' && *(cek+8) == 'O') || (*(cek) == 'O' && *(cek+3) == 'O' && *(cek+6) == 'O') ||
      (*(cek+1) == 'O' && *(cek+4) == 'O' && *(cek+7) == 'O') || (*(cek+2) == 'O' && *(cek+5) == 'O' && *(cek+8) == 'O') ||
      (*(cek) == 'O' && *(cek+4) == 'O' && *(cek+8) == 'O') || (*(cek+2) == 'O' && *(cek+4) == 'O' && *(cek+6) == 'O')
    ){
    system("clear");
    banner();
    game(cek);
    printf("\nthe winner is player 1\n");
    exit(1);
  }
  if( (*(cek)   == 'X' && *(cek+1) == 'X' && *(cek+2) == 'X') || (*(cek+3) == 'X' && *(cek+4) == 'X' && *(cek+5) == 'X') ||
      (*(cek+6) == 'X' && *(cek+7) == 'X' && *(cek+8) == 'X') || (*(cek)   == 'X' && *(cek+3) == 'X' && *(cek+6) == 'X') ||
      (*(cek+1) == 'X' && *(cek+4) == 'X' && *(cek+7) == 'X') || (*(cek+2) == 'X' && *(cek+5) == 'X' && *(cek+8) == 'X') ||
      (*(cek)   == 'X' && *(cek+4) == 'X' && *(cek+8) == 'X') || (*(cek+2) == 'X' && *(cek+4) == 'X' && *(cek+6) == 'X')
    ){
    system("clear");
    banner();
    game(cek);
    printf("\nthe winner is player 2\n");
    exit(1);
  }
}
void logic();
int main(){
  char *pilihan;
  int player = 1,choice;
  pilihan = malloc(1);
  assign(pilihan);
  while(1){
    system("clear");
    setvbuf(stdout, NULL, _IONBF, 0);
    banner();
    game(pilihan);
    printf("\nplayer %d >> ",player);
    scanf("%d",&choice);
    logic(&choice,&player,pilihan);
    check(pilihan);
  }
}

void logic(int *pil,int *user,char *ubah){
  int check = 0;
  switch(*pil){
    case 1:
    if(*(ubah) != 'X' && *(ubah) != 'O'){
      if(*user == 1)
        *(ubah) = 'O';
      else
        *(ubah) = 'X';
    }
    else
      check = 1;
    break;
    case 2:
    if(*(ubah+1) != 'X' && *(ubah+1) != 'O'){
      if(*user == 1)
        *(ubah+1) = 'O';
      else
        *(ubah+1) = 'X';
    }
    else
      check = 1;

    break;
    case 3:
    if(*(ubah+2) != 'X' && *(ubah+2) != 'O'){
      if(*user == 1)
        *(ubah+2) = 'O';
      else
        *(ubah+2) = 'X';
    }
    else
      check = 1;

    break;
    case 4:
    if(*(ubah+3) != 'X' && *(ubah+3) != 'O'){
    if(*user == 1)
        *(ubah+3) = 'O';
      else
        *(ubah+3) = 'X';
    }
    else
      check = 1;

    break;
    case 5:
    if(*(ubah+4) != 'X' && *(ubah+4) != 'O'){
    if(*user == 1)
        *(ubah+4) = 'O';
      else
        *(ubah+4) = 'X';
    }
    else
      check = 1;

    break;
    case 6:
    if(*(ubah+5) != 'X' && *(ubah+5) != 'O'){
    if(*user == 1)
        *(ubah+5) = 'O';
      else
        *(ubah+5) = 'X';
    }
    else
      check = 1;

    break;
    case 7:
    if(*(ubah+6) != 'X' && *(ubah+6) != 'O'){
    if(*user == 1)
        *(ubah+6) = 'O';
      else
        *(ubah+6) = 'X';
    }
    else
      check = 1;

    break;
    case 8:
    if(*(ubah+7) != 'X' && *(ubah+7) != 'O'){
      if(*user == 1)
        *(ubah+7) = 'O';
      else
        *(ubah+7) = 'X';
    }
    else
      check = 1;

    break;
    case 9:
    if(*(ubah+8) != 'X' && *(ubah+8) != 'O'){
    if(*user == 1)
        *(ubah+8) = 'O';
      else
        *(ubah+8) = 'X';
    }
    else
      check = 1;

    break;
    default:
      check = 2;
    break;
  }
  if(!check){
    if(*user == 1)
      *user = 2;
    else
      *user = 1;
    }
  else{
    if(check != 2)
      printf("upss sudah di ambil !");
    else
      printf("not found !");
    sleep(1);
  }
}

