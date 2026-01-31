#include<stdio.h>
void main(){
  int n, fact=1, sum=0,r,temp;
  printf("Enter Number:");
  scanf("%d",&n);
  temp=n;
  while(temp>0){
    r=temp%10;
    fact =1;
    for(int i=r;i>=1;i--){
      fact=fact*i;}
    sum=sum+fact;
    temp=temp/10; }
  if(n==sum){
    printf("this is a strong number");}
  else{
    printf("not a strong number");
  }
  }
