#include<stdio.h> 
int main(){ 
 int num,sum=0; 
 printf("enter the number\n"); 
 scanf("%d",&num); 
 for(int i=1;i<num;i++){ 
  if(num%i==0){ 
   sum+=i; 
  } 
 } 
COMPOSITE NUMBER 
Same as this program but in the 
for loop n%i!=0 should be there 
instead of n%i==0 and print 
composite number instead of 
prime number 
if(sum==num){ 
printf("%d is a perfect number",num); 
}else{ 
} 
printf("%d is not a perfect number",num); 
return 0; 
}
