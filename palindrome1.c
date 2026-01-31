#include<stdio.h>
void main(){
  int n, p=0,r;
  printf("Enter Ur Number:");
  scanf("%d",&n);
  while(n!=0){
    r=n%10;
    p=p*10+r;
    n=n/10;
  }
  printf("reversed number is %d",p);
}
