/*3. Büyük-Küçük Harf Dönüşümü

Kullanıcıdan bir string alın ve:

    Tüm harfleri büyük harfe çevirip yazdırın.
    Tüm harfleri küçük harfe çevirip yazdırın.*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define N 35

int main()
{
    char str[N];
    printf("bir kelime yazin: ");
    scanf("%s", str);

    // chatgpt düzeltme
    int j = 0;
    while (str[j] != '\0')
    { // Dizinin sonuna gelene kadar
        str[j] = tolower(str[j]);
        j++;
    }
    printf("Kucuk harfli versiyonu: %s \n", str);
    j = 0;
    while (str[j] != '\0')
    { // Dizinin sonuna gelene kadar
        str[j] = toupper(str[j]);
        j++;
    }

    // benim yazdigim
    int i = 0;
    while (i <= N)
    {
        str[i] = tolower(str[i]);
        i++;
    }
    printf("Kucuk harfli versiyonu: %s \n", str);

    i = 0;
    while (i <= N)
    {
        str[i] = toupper(str[i]);
        i++;
    }
    printf("Buyuk harfli versiyonu: %s \n", str);

    return 0;
}