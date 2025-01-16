/*2. if ile Harf Kontrolü

Kullanıcıdan bir karakter alın ve:

    Büyük harf mi?
    Küçük harf mi?
    Rakam mı?
    kontrol edin.*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char t;
    printf("Give me a char: ");
    scanf("%c", &t);

    if (isupper(t))
    {
        printf("Its a upper char");
    }else if (islower(t))
    {
        printf("Its a lower char");
    }else if (isdigit(t))
    {
        printf("Its a number");
    }else printf("Its not a char or a number");

    return 0;
    
    
    

}
