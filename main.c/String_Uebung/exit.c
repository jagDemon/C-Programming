#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

/*6. do-while ile Belirli Bir Kelime Kontrolü

Kullanıcıdan bir kelime alın. Eğer kullanıcı "exit" kelimesini 
girene kadar başka bir şey girerse, program tekrar giriş isteyip aldığı kelimeyi yazdırır.*/

int main(){
    char str[256];
    const char *key = "exit";

    //do icine yaz ki bir tekrar kelime soksun. 
    do
    {
        printf("Bir kelime gir: (cikmak icin 'exit' yaz.) \n");
        scanf("%s", str);
        if (strcmp(str, key) != 0) // stringler esit degilse...
        {
            printf("Girdigin kelime: %s.\n", str);
        }
        
    } while (strcmp(str, key) != 0);

    printf("Program sonlandirildi. \n");
    


    return 0;
}