/*1. String Okuma ve Yazdırma

Kullanıcıdan bir string alın ve bu stringin uzunluğunu hesaplayarak ekrana yazdırın. Örneğin:

    Giriş: Hello
    Çıkış: String uzunluğu: 5*/

    #define N 35
    #include <stdio.h>
    #include <ctype.h>
    #include <string.h>

    int main(){
        char str[N];
        
        printf("Bir max 35 karakterli String giriniz: \n");
        // scanf("%s", str);
        scanf("%34s", str); // bosluk kontrolu ve sinir belirleme

        printf("String uzunlugu: %d", strlen(str));

        return 0;
    }