#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

/*7. Stringde Rakamları Toplama

Kullanıcıdan bir string alın ve bu stringde geçen tüm
rakamları toplayan bir program yazın.
Örneğin, "a1b2c3" için toplam 1 + 2 + 3 = 6 olacaktır.*/

int main()
{

    char str[256];
    char str2[256] = "";
    printf("Icinde sayilar olan bir String gir.\n");
    scanf("%255s", str);

    int i = 0;
    int sum = 0;
    int len = strlen(str);
    int intNum;
    int j = 0;

    for (i = 0; i < len; i++)
    {
        if (isdigit(str[i]))
        {
            str2[j] = str[i];
            j++;
        }
    }

    intNum = atoi(str2);
    while (intNum > 0)
    {
        sum += intNum % 10;
        intNum /= 10;
    }

    printf("toplam: %d", sum);

    return 0;
}

/*WITHOUT ATOI

int main()
{
    char str[256];
    printf("Icinde sayilar olan bir String gir:\n");
    scanf("%255s", str); // Güvenli giriş

    int sum = 0;         // Toplamı tutan değişken

    // Stringdeki tüm karakterleri kontrol et
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isdigit(str[i])) // Eğer karakter rakam ise
        {
            sum += str[i] - '0'; // Rakamı sayıya çevir ve toplama ekle
        }
    }

    printf("Toplam: %d\n", sum);

    return 0;
}

*/