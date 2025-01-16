#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

void increament(int *n);

void increament(int *n)
{
    *n = *n + 1;
}
//*n ifadesiyle, bu adresteki orijinal değer güncellenir.

int main()
{
    int x = 10;

    printf("Orjinal deger: %d\n", x);
    increament(&x); //Degiskenin adresini fonksiyona gec
    printf("Fonksiyon cagrisi sonrasi deger: %d\n", x);
    
    return 0;
}
