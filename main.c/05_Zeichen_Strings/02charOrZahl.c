/*2. Karakter Sınıflandırması

Kullanıcıdan bir karakter alın ve bu karakterin:

    Harf mi?
    Sayı mı?
    Boşluk karakteri mi?
    olduğunu kontrol edin ve ekrana yazdırın.*/

    #include <stdio.h>
    #include <ctype.h>
    #include <string.h>

    int main(){
        char character;
        printf("bir char giriniz: ");
        character = getchar();

        if (isspace(character))
        {
            printf("Bu bir bosluk karakteri.");
        }else if (isdigit(character))
        {
            printf("Bu bir sayidir.");
        }else if (isalpha(character))
        {
            printf("Bu bir harftir.");
        }else
        {
            printf("hicbiri?");
        }
        
        
        


        return 0;
    }