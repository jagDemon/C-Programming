#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#define N 256
int main()
{

    char str[N];
    printf("bir kelime yazin, buyuk ve kucuk harfler iceren: \n");
    scanf("%255s", str);

    char buyuk[N];
    char kucuk[N];
    int countK = 0;
    int countB = 0;

    for (int i = 0; i < str[i] != '\0'; i++)
    {
        if (isupper(str[i]))
        {
            countB++;
        }
        else if (islower(str[i]))
        {
            countK++;
        }
    }
    printf("Buyuk harf sayisi: %d\n", countB);
    printf("Kucuk harf sayisi: %d\n", countK);

    return 0;
}