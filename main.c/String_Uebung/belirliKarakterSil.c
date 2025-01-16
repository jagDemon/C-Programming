/* Belirli Bir Karakteri Silme

Kullanıcıdan bir string ve bir karakter alın.
Bu karakterin stringdeki tüm görünümlerini silip geri kalan stringi yazdıran bir program yazın.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#define N 256

int main()
{
    char str[N];
    char str2[N];
    char harf;

    printf("Bir String veriniz.\n");
    fgets(str, sizeof(str), stdin);
    // scanf("%255s", str);

    printf("Silinmesini istediginiz char i gir.\n");
    scanf("%c", &harf);

    int i = 0;
    int j = 0;
    int len = strlen(str);

    while (str[i] != '\0')
    {
        if (str[i] != harf)
        {
            str2[j] = str[i];
            j++;
        }
        i++;
    }

    str2[j] = '\0';
    

    printf("Yeni String: %s", str2);

    return 0;
}