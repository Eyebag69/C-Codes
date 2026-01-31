#include<stdio.h>
#define pi 3.14
int main(){
  float r, area;
  printf("Enter radius r:");
  scanf("%f",&r);
  area = pi*r*r;
  printf("area of circle is %.2f", area);
}
