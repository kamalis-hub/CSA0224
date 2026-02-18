#include<stdio.h> 
int main(){ 
f
loat h; 
printf("Enter height:"); 
scanf("%d",&h); 
if(h<0){ 
printf("Invalid height"); 
}else if(h<150){ 
printf("Drawf"); 
}else if(h>=150&&h<=195){ 
printf("Average height"); 
}else{ 
printf("Taller"); 
return 0; 
}
