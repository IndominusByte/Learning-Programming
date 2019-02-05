#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char square[9] = {'1','2','3','4','5','6','7','8','9'};
int player = 1,nomor,salah;
_Bool win,dr;

void banner(){
  puts("========================================\n");
  puts("             tic tac toe game           \n");
  puts("       player 1 (X) -  player 2 (O)     \n");
  puts("========================================\n");
}
void game(){
  printf("       |         |       \n");
  printf("  %c    |    %c    |   %c  \n",square[0],square[1],square[2]);
  printf("_______|_________|______ \n");
  printf("       |         |       \n");
  printf("  %c    |    %c    |   %c  \n",square[3],square[4],square[5]);
  printf("_______|_________|______ \n");
  printf("       |         |       \n");
  printf("  %c    |    %c    |   %c  \n",square[6],square[7],square[8]);
  printf("       |         |       \n");

}

void check(int i){
  if(square[i] != 'X' && square[i] != 'O'){
      if(player == 1)
        square[i] = 'X';
      else
        square[i] = 'O';
    }else{
      if(player == 2)
        printf("sudah ke isi dengan player %d\n",player-1);
      else
        printf("sudah ke isi dengan player %d\n",player+1);
      salah = 1;
    }
}

_Bool draw(){
  if( (square[0] == 'X' || square[0] == 'O') && (square[1] == 'X' || square[1] == 'O') && (square[2] == 'X' || square[2] == 'O') &&
      (square[3] == 'X' || square[3] == 'O') && (square[4] == 'X' || square[4] == 'O') && (square[5] == 'X' || square[5] == 'O') &&
      (square[6] == 'X' || square[6] == 'O') && (square[7] == 'X' || square[7] == 'O') && (square[8] == 'X' || square[8] == 'O')
    ){
    dr = 1;
  }
  return dr;
}
_Bool winner(){
  if( (square[0] == 'X' && square[1] == 'X' && square[2] == 'X') || (square[3] == 'X' && square[4] == 'X' && square[5] == 'X') ||
      (square[6] == 'X' && square[7] == 'X' && square[8] == 'X') || (square[0] == 'X' && square[3] == 'X' && square[6] == 'X') ||
      (square[1] == 'X' && square[4] == 'X' && square[7] == 'X') || (square[2] == 'X' && square[5] == 'X' && square[8] == 'X') ||
      (square[0] == 'X' && square[4] == 'X' && square[8] == 'X')
      ){
      win = 1;
      player = 1;
  }
  if((square[0] ==  'O' && square[1] == 'O' && square[2] == 'O') || (square[3] == 'O' && square[4] == 'O' && square[5] == 'O') ||
      (square[6] == 'O' && square[7] == 'O' && square[8] == 'O') || (square[0] == 'O' && square[3] == 'O' && square[6] == 'O') ||
      (square[1] == 'O' && square[4] == 'O' && square[7] == 'O') || (square[2] == 'O' && square[5] == 'O' && square[8] == 'O') ||
      (square[0] == 'O' && square[4] == 'O' && square[8] == 'O')
      ){
      win = 1;
      player = 2;
  }
  return win;
}

int main(){

while(1){
  banner();
  game();
  salah = 0;
  printf("\nplayer %d, enter number : ",player);
  scanf("%d",&nomor);
  switch(nomor){
    case 1:
      check(0);
    break;
    case 2:
      check(1);
    break;
    case 3:
      check(2);
    break;
    case 4:
      check(3);
    break;
    case 5:
      check(4);
    break;
    case 6:
      check(5);
    break;
    case 7:
      check(6);
    break;
    case 8:
      check(7);
    break;
    case 9:
      check(8);
    break;
    default:
      salah = 1;
      printf("salah move !\n");
    break;
  }
  if(draw() == 1){
    system("clear");
    banner();
    game();
    printf("\nGAME IS DRAW !\n");
    break;
  }
  if(winner () == 1){
    system("clear");
    banner();
    game();
    printf("\nthe winner is player %d\n",player);
    break;
  }
    if(salah != 1){
      if(player == 1)
        player = 2;
      else
        player = 1;

      nomor = 0;
      fflush(stdout);
      system("clear");
    }else{
      sleep(1);
      system("clear");
      continue;
    }

  }

}
