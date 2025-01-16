/*8. switch ile Basit Hesap Makinesi

Kullanıcıdan iki sayı ve bir işlem (+, -, *, /)
isteyin ve switch kullanarak sonucu hesaplayın.*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

enum islem
{
    TOPLAMA = 1,
    CIKARMA,
    CARPMA,
    BOLME
};

int main()
{
    enum islem secim;
    int sayi, sayi2;
    int sonuc = 0;
    
    printf("Iki sayi ve bir islem (+, -, *, /) seciniz. \n");
    printf("ilk sayi: ");
    scanf("%d", &sayi);
    printf("ikinci sayi: ");
    scanf("%d", &sayi2);

    printf("Islem icin seciniz \n1 - Toplama\n");
    printf("2 - Cikarma\n");
    printf("3 - Carpma\n");
    printf("4- Bolma \n");
    printf("Seciminiz: ");
    scanf("%d", &secim);

    switch (secim)
    {
    case TOPLAMA:
        sonuc = sayi + sayi2;
        printf("%d + %d = %d", sayi, sayi2, sonuc);
        break;

    case CIKARMA:
        sonuc = sayi - sayi2;
        printf("%d - %d = %d", sayi, sayi2, sonuc);
        break;

    case CARPMA:
        sonuc = sayi * sayi2;
        printf("%d * %d = %d", sayi, sayi2, sonuc);
        break;

    case BOLME:
        sonuc = sayi / sayi2;
        printf("%d + %d = %d", sayi, sayi2, sonuc);
        break;

    default:
        printf("gecersiz islem secildi");
    }

    return 0;
}