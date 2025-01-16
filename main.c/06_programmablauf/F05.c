/*5. do-while ile Geçerli Giriş

Kullanıcıdan pozitif bir sayı isteyin. Kullanıcı geçersiz bir sayı girerse, tekrar giriş yapmasını sağlayın.*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    int num;
    printf("Give positive a number: ");
    
    do
    {
        printf("Try again");
        scanf("%d", &num);
    } while (num <= 0);
    

    return 0;
}