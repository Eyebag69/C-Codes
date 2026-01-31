#include<stdio.h>
#include<math.h>
void main(){
  int n, sum=0,r,count=0,result;
  printf("Enter your Number:");
  scanf("%d",&n);
  int temp=n;
  while(n!=0){
    n=n/10;
    count++;}
  temp = n;
  while(temp!=0){
     r=temp%10;
     result=pow(r,count);
     sum=sum+result;
     temp=temp/10;
     }
  if(n==sum){
    printf("number is armstrong");
  }
  else{
    printf("not an armstrong number");
  }
}

