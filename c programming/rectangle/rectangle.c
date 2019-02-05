#include <stdio.h>

int main(){
  float width,height,area,perimeter;
  
  printf("masukan width: ");
  scanf("%f",&width);
  printf("masukan height : ");
  scanf("%f",&height);

  perimeter = 2.0 * (width + height);
  area = width * height;
  printf("area is %f , perimeter is %f\n",area,perimeter);
  return 0;
}
