#include <stdio.h>

char copy(char *to,char *from){
  while(*from)
    *to++ = *from++;

  *to = '\0';
}
int main(){
 char str1[] = "this is tring dude ";
 char str2[20];
 copy(str2,str1);
 printf("%s\n",str2);
}
