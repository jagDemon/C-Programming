#include <stdio.h>
#include "methods.h"

//gcc ana.c methods.c -o program
int main()
{
    double numbers[] = {1.0, 2.0, 3.0, 4.0};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    double result = vektor_sum(numbers, length);

    printf("Vektor sum: %.2f\n", result);

    return 0;
}
