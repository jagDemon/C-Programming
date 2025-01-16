/*6. String Kopyalama

Kullanıcıdan bir string alın ve bir başka string 
değişkenine kopyalayarak her iki stringi de ekrana yazdırın*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define N 35

int main(){
    char str[N];
    char strCopy [N];
    printf("Bir string yaz: ");
    scanf("%s", str);

    strcpy(strCopy, str);
    printf("orijinal: %s \n kopya: %s", str, strCopy);

    return 0;
}