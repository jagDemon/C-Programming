/*7. Enum ile Renk Kontrolü

Bir enum kullanarak kırmızı, yeşil ve mavi renklerini temsil
eden bir sistem oluşturun ve kullanıcıdan bir renk seçmesini isteyin. Seçime göre çıktı yazdırın.*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

enum renk
{
    KIRMIZI = 1,
    YESIL,
    MAVI
};

int main()
{
    enum renk secim;

    printf("Renk secimi yapiniz:\n");
    printf("1 - Kirmizi\n");
    printf("2 - Yesil\n");
    printf("3 - Mavi\n");
    printf("Seciminiz: ");
    scanf("%d", &secim);

    switch (secim)
    {
    case KIRMIZI:
        printf("Kirmizi renk secildi. \n");
        break;
    case YESIL:
        printf("Yesil renk secildi. \n");
        break;
    case MAVI:
        printf("Mavi renk secildi. \n");
        break;

    default:
        printf("Gecersiz renk secimi \n");
    }

    return 0;
}