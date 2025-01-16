#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

// kullanicadan string ve bir karakter al ve bu karaktering bu stringte kac defa gectigini bul.

int main()
{
    char str[21];
    char kac;

    printf("Bir harf yaz.\n");
    scanf("%c", &kac);

    printf("Bir String yaz.\n");
    scanf("%s", str);

    int count = 0;
    int i = 0;
    int len = strlen(str);

    for (i = 0; i < len; i++)
    {
        // if (strcmp(str[i], kac) == 0)
        if (str[i] == kac)
        {
            count += 1;
        }
    }

    printf("%d", count);

    return 0;
}