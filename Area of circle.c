#include <stdio.h>
int main()
 {
    float r,pi,area;
    printf("Enter the radius of the circle: ");
    scanf("%f",&r);
    pi=3.14;
    area = pi*r*r;
    printf("Area of Circle = %.4f\n", area);
    return 0;
 }
