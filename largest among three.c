#include<stdio.h> 
int main(){ 
int a,b,c; 
printf("Enter the values of a,b,c:\n"); 
scanf("%d %d %d",&a,&b,&c); 
if(a>b&&a>c) 
printf("A is greater\n",a); 
else if(b>a&&b>c) 
printf("B is greater\n",b); 
else 
printf("C is greater\n",c); 
return 0; 
}
