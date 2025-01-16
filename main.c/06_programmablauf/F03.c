/*3. switch ile Gün İsimleri

Bir haftanın gününü temsil eden bir sayı (1-7) alın ve bu sayıyı:

    Pazartesi
    Salı
    gibi günlere çeviren bir program yazın. Geçersiz girişler için hata mesajı ekleyin.*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    int num; 
    printf("Give me a number of week day (1-7): ");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("Monday \n");
        break;
    case 2:
    printf("Thuesday \n");
    break;
    case 3:
    printf("Wednesday \n");
    break;
    case 4: 
    printf("Thursday \n");
    break;
    case 5: 
    printf("Friday \n");
    break;
    case 6:
    printf("Saturday \n");
    break;
    case 7:
    printf("Sunday \n");
    break;
    
    default:
    printf("None of them. Wrong Code!! \n");
        break;
    }

    return 0;
    
}