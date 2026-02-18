#include<stdio.h> 
int main(){ 
 int n,i; 
 int count=0,sum=0; 
 printf("Enter the value of n:\n"); 
 scanf("%d",&n); 
 for(i=1;i<=n;i++){ 
  if(i%5==0){ 
    count++; 
    sum+=i; 
     } 
 } 
 printf("The no.of integers divisible by 5 is:%d\n",count); 
 printf("The sum of integers divisible by 5 is:%d\n",sum); 
 return 0; 
}
