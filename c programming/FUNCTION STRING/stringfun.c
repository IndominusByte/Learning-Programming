#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(){
  printf("\nA == A %d\n",strcmp("A","A"));
  printf("A == B %d\n",strcmp("A","B"));
  printf("B == A %d\n",strcmp("B","A"));

  char str1[] = "nyoman pradipta - dewantara";
  const char delimeter = '-';
  char *p1;
  char *p2;
  char *token;

  p1 = strstr(str1,"dewantara");

  printf("hasil strstr : %s\n",p1);

  p2 = strchr(str1,'-');
  printf("hasil strchr : %s\n",p2);

  token = strtok(str1,&delimeter);
  printf("hasil strtok : %s\n",token);

  while( token != NULL ) {
      printf( " %s\n", token );

      token = strtok(NULL,&delimeter);
   }

  //fungsi aman
  char cat[20] = "nyoman "; 
  strncat(cat,"is the best !",20);
  printf("hasil dari strncat : %s\n",cat);

  printf("B == A %d\n",strncmp("B","A",1));
  strncpy(cat,"in the world",20);
  printf("hasil dari strncpy : %s\n",cat);

  char buffer[60];
  printf("masukan kata untuk di hitung : ");
  scanf("%s",buffer);

  int i = 0;
  int letter = 0,number = 0,symbol = 0;
  while(buffer[i]){
    if(isalpha(buffer[i])) ++letter;
    else if(isdigit(buffer[i])) ++number;
    else if(ispunct(buffer[i])) ++symbol;
    ++i;
  }

  printf("%d huruf , %d number , %d symbol\n",letter,number,symbol);
}
