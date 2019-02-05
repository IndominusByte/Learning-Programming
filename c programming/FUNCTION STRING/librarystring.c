#include <stdio.h>

int length(char input[]){
  int i;
  i = 0;
  while(input[i] != '\0'){
    ++i;
  }
  return i;
}

_Bool cmp(char a1[],char a2[]){
  _Bool result;
  int i;
  result = 1;
  i = 0;
  while(a1[i] != '\0' || a2[i] != '\0'){
    if(a1[i] != a2[i]){
      result = 0;
      break;
    }
    ++i;
  }
  return result;
}

char* concate(char kata1[],char kata2[]){
  int i,j,len;
  i = 0;
  len = length(kata1);
    while(1){
      if(i != len)
        i++;
      else{
        for(int j = 0; j < length(kata2); j++){
            kata1[i] = kata2[j];
            i++;
        }
        break;
      }
    }

  return kata1;
}
int main(){
  char buffer[64];
  char kata1[64],kata2[64];

  printf("masukan input : ");
  scanf("%s",buffer);
  printf("length nya adalah %d\n",length(buffer));

  printf("kata pertama : ");
  scanf("%s",kata1);
  printf("kata kedua : ");
  scanf("%s",kata2);
  printf("hasilnya %d\n",cmp(kata1,kata2));
  printf("hasil concate : %s\n",concate(kata1,kata2));
}
