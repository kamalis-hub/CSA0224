#include <stdio.h>
int main() 
{
    int a;
    printf("Enter a number (1-3): ");
    scanf("%d",&a);
    if (a==1){
	printf("You chose One\n");}
    else if (a==2)
    {
    printf("You chose Two\n");
    }
    else if (a==3)
    {
	printf("You chose Three\n");
    }
    else{
    printf("Invalid choice\n");
    }
    return 0;
}
