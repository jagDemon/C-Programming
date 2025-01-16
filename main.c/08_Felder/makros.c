#include <stdio.h>

#define PI 3.14159

#define SQUARE(x) x *x

#define DEBUG printf("DEBUG modundasiniz.\n")

#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

#define SWAP(a, b)       \
    {                    \
        int temp = *(a); \
        *(a) = *(b);     \
        *(b) = temp;     \
    }
#define SWAP_STR(a, b)    \
    {                     \
        char *temp = (a); \
        (a) = (b);        \
        (b) = temp;       \
    } // pointer kullanma!!
int main()
{
    double alan;
    double r = 4;
    alan = PI * r * r;

    printf("alan: %lf r*r: %lf \n", alan, SQUARE(r));
    DEBUG;

    printf("en buyuk sayi %lf \n", MAX(alan, r));
    printf("en kucuk sayi %lf \n", MIN(alan, r));

    SWAP(&alan, &r);
    printf("alan: %lf r*r: %lf \n", alan, SQUARE(r));

    printf("STR1:\n");
    char *str1;
    scanf("%s", str1);
    printf("STR2:\n");
    char *str2;
    scanf("%s", str2);

    SWAP_STR(str1, str2);
    printf("%s str1 ve %s str2", str1, str2);

    return 0;
}
