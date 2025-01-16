#include <stdio.h>
#define N 32  // Maksimum string uzunluğu (31 karakter + '\0')

int main() {
    char str[N];  // String için buffer
    int i = 0;

    printf("Bir string giriniz (maksimum %d karakter): ", N - 1);

    // Kullanıcıdan karakter al ve sınır kontrolü yap
    while (i < N && (str[i] = getchar()) != '\n') {
        i++;
    }

    // Eğer sınır aşıldıysa
    if (i == N) {
        printf("ERROR: Buffer overflow\n");
        return 1;  // Programı hata ile sonlandır
    } else {
        str[i] = '\0';  // Stringi sonlandır
    }

    printf("Girilen string: %s\n", str);
    return 0;
}
