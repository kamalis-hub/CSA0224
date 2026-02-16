#include <stdio.h>
int main()
 {
    float l, w, area;
    printf("Enter length and width of the rectangle: ");
    scanf("%f %f", &l, &w);
    area = l * w;
    printf("Area = %f\n", area);
    return 0;
}
