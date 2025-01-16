#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

void swap(int *a, int *b);

void swap(int *a, int *b)
{
    int temp = *a; // a'nın değerini geçici bir değişkene al
    *a = *b; // b'nin değerini a'ya ata
    *b = temp; // Geçici değişkendeki a'nın değerini b'ye ata
}
int main()
{
    int x = 5, y = 3;
    
    printf("Degismeden once: x = %d, y = %d\n", x, y);
    swap(&x, &y);  // x ve y adreslerini fonksiyona geçir
    printf("Degistikten sonra: x = %d, y = %d\n", x, y);

    return 0;
}
