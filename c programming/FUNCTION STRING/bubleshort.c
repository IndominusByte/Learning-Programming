#include <stdio.h>

int main(){
  int input,buffer[64],temp,temp2;
  printf("input jumlah angka : ");
  scanf("%d",&input);

  for(int i = 0; i < input; i++)
    scanf("%d",&buffer[i]);

  printf("======== INPUTAN =========\n");
  for(int i = 0; i < input; i++){
    for(int j = 1; j < input; j++){
      if((buffer[i] > buffer[j]) || buffer[j] > buffer[i]){
        temp = buffer[j];
        buffer[j] = buffer[i];
        buffer[i] = temp;
        temp = 0;
      }
      else if(buffer[i+1] > buffer[j]){
        temp = buffer[j];
        buffer[j] = buffer[j+1];
        buffer[j+1] = temp;
        temp = 0;
      }
    }
  }

  for(int i = 0; i<input;i++)
    printf("%d\n",buffer[i]);

}
