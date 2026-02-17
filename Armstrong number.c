#include <stdio.h>

int main() {
    int num, temp, sum = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while(temp != 0) {
        rem = temp % 10;
        sum = sum + (rem * rem * rem);
        temp = temp / 10;
    }

    if(num == sum)
        printf("Armstrong number\n");
    else
        printf("Not an Armstrong number\n");

    return 0;
}
