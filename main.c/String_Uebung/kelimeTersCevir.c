/*10. Kelimeleri Ters Çevirme

Kullanıcıdan boşluklarla ayrılmış bir cümle alın ve bu cümledeki her kelimeyi ayrı ayrı ters çevirip yeniden yazdırın. Örneğin:

    Giriş: "Merhaba Dünya"
    Çıkış: "abahreM aynüD"*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#define N 256

int main()
{
    char str[N];
    printf("Bir cumle veriniz.\n");
    fgets(str, sizeof(str), stdin);

    // fgets ile alınan stringin sonunda '\n' varsa onu kaldırıyoruz
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);
    int start = 0;
    int end = 0;
    char temp;

    while (end <= len) // cümlenin sonuna kadar ilerle
    {
        // Boşluk veya stringin sonu ile karşılaşıldığında kelimeyi ters çevir
        if (str[end] == ' ' || str[end] == '\0')
        {
            int i = start;
            int r = end - 1;

            while (i < r)
            {
                temp = str[i];
                str[i] = str[r];
                str[r] = temp;

                i++;
                r--;
            }
            // Yeni kelime için başlangıç noktasını güncelle
            start = end + 1;
        }
        end++;
    }
    printf("Ters kelime: %s", str);

    return 0;
}