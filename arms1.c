#include<stdio.h>
#include<math.h>
void main(){
  int n, sum=0,r,count=0,result;
  printf("Enter your Number:");
  scanf("%d",&n);
  int temp=n;
  int original = n;
  while(temp!=0){
    count++;
    temp=temp/10;}
  temp = n;
  while(temp!=0){
     r=temp%10;
     result=pow(r,count);
     sum=sum+result;
     temp=temp/10;
     }
  if(original==sum){
    printf("number is armstrong");
  }
  else{
    printf("not an armstrong number");
  }
}

