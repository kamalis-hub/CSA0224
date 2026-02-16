#include <stdio.h>
int main()
 {
    float l, w,p;
    printf("Enter length and width of the rectangle: ");
    scanf("%f %f", &l, &w);
    p = 2 * (l + w);
    printf("Perimeter = %f\n", p);
    return 0;
}
