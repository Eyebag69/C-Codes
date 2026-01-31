#include<stdio.h>
void main(){
  int n, s=0;
  printf("Enter a number:");
  scanf("%d",&n);
  for(int i=1;i<n;i++){
    if(n%i==0){
      s=s+i;}}
  if(n==s){
      printf("This is a perfect number");
    }
  else{
      printf("This is not a perfect number");
    }
  }
