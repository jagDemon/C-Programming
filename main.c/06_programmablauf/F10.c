/*10. Sonsuz Döngü ile Sayaç

Bir for döngüsü ile sonsuz bir sayaç oluşturun ve 
break kullanarak döngüyü 100'de durdurun*/

#include <stdio.h>

int main() {
    int sayac = 1;

    // Sonsuz döngü başlatıyoruz
    for (;;) {
        printf("Sayac: %d\n", sayac);

        // Sayaç 100'e ulaştığında döngüyü kırıyoruz
        if (sayac == 100) {
            break;
        }

        // Sayaç değerini arttırıyoruz
        sayac++;
    }

    printf("Dongu 100'de durdu.\n");

    return 0;
}
