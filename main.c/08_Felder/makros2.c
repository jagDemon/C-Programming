#include <stdio.h>
#include <stdlib.h>
#include <string.h>  // strcpy için

// Makrolar
#define PI 3.14159
#define SQUARE(x) ((x) * (x))  // Parantez önemli
#define DEBUG printf("DEBUG modundasiniz.\n")
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define SWAP(a, b) { double temp = *(a); *(a) = *(b); *(b) = temp; }
#define SWAP_STR(a, b) { char *temp = (a); (a) = (b); (b) = temp; }  // Pointer kullanımı

int main() {
    // Alan ve SQUARE kullanımı
    double alan;
    double r = 4;
    alan = PI * SQUARE(r);  // Parantezler SQUARE ile işlem hatasını önler
    printf("Alan: %lf (r*r: %lf)\n", alan, SQUARE(r));

    // DEBUG kullanımı
    DEBUG;

    // MAX ve MIN kullanımı
    printf("En buyuk sayi: %lf\n", MAX(alan, r));
    printf("En kucuk sayi: %lf\n", MIN(alan, r));

    // SWAP kullanımı (pointer ile değer değiştirme)
    SWAP(&alan, &r);
    printf("SWAP sonrası alan: %lf, r: %lf\n", alan, r);

    // String giriş ve SWAP_STR kullanımı
    printf("STR1 giriniz: ");
    char *str1 = (char *)malloc(100 * sizeof(char));  // Bellek ayır
    scanf("%99s", str1);

    printf("STR2 giriniz: ");
    char *str2 = (char *)malloc(100 * sizeof(char));  // Bellek ayır
    scanf("%99s", str2);

    SWAP_STR(str1, str2);
    printf("SWAP sonrası -> str1: %s, str2: %s\n", str1, str2);

    // Belleği serbest bırak
    free(str1);
    free(str2);

    return 0;
}

/*Yapılan Düzenlemeler:
1. SQUARE Makrosunda Parantez Kullanımı

    Orijinal kodda #define SQUARE(x) x *x şeklindeydi. Bu, işlem öncelik hatalarına yol açabilir.
    Örneğin: SQUARE(1 + 2) çağrıldığında, 1 + 2 * 1 + 2 olarak genişler ve yanlış bir sonuç üretir.
    Bu yüzden makro şu şekilde güncellendi:

    #define SQUARE(x) ((x) * (x))

2. SWAP Makrosu

    Orijinal kodda SWAP makrosu yalnızca int türleri destekliyordu.
    Çözüm: double türü de desteklensin diye temp değişkeninin türü double yapıldı:

    #define SWAP(a, b) { double temp = *(a); *(a) = *(b); *(b) = temp; }

3. String Giriş ve SWAP_STR Makrosu

    C dilinde char * ile string giriş alırken doğrudan scanf("%s", str1) kullanmak tehlikelidir, çünkü bellek alanı ayrılmamışsa undefined behavior oluşur.
    Çözüm: malloc ile string için bellek ayrıldı:

    char *str1 = (char *)malloc(100 * sizeof(char));
    scanf("%99s", str1);

        99 sınırı ile fazla uzun string girişleri engellendi.
        Bellek, işlemler tamamlandıktan sonra free() ile serbest bırakıldı.

4. Bellek Yönetimi Eklenmesi

    malloc ile ayrılan bellek sonrasında free ile serbest bırakıldı:

free(str1);
free(str2);*/