#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a < b) 
    {
        printf("A is Smallest");
    } 
    else
    {
        printf("B is Smallest");
    }
    return 0;
}
