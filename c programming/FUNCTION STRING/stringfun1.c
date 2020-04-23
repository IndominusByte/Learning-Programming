#include <stdio.h>
#include <string.h>

int main(){
  char lol[20],he[10];
  char str1[] = "halo ",str2[] = "nyoman";
  /*
  printf("fungsi strlen : ");
  gets(lol);
  printf("%zu\n",strlen(lol));
  printf("sebelum ada he : %s",he);
  strcpy(he,"halo strcpy");
  printf("he skrng : %s",he);
  */
  printf("fungsi concat \n");
  puts(str1);
  strcat(str1,str2);
  puts(str1);
  puts(str2);
  printf("%d",strcmp("halo","halo"));
}
