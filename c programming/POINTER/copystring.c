#include<stdio.h>

char copy(char *to,char *from){

  while(*from)
    *to++ = *from++;

  *(to+1) = '\0';
}
int main(){
  char str1[] = "this is copy string dude.";
  char str2[64];
 
  copy(str2,str1);
  printf("%s\n",str2);
}
