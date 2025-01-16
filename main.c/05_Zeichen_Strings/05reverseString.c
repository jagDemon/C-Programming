/*5. Karakterleri Ters Çevir

Kullanıcıdan bir string alın ve bu stringin karakterlerini ters çevirerek yazdırın.*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define N 35

int main(){
    char str[N];
    char reversedStr[N];
    printf("Bir string yaz: ");
    scanf("%s", str);

    int a = strlen(str);

    int i = 0;
    int r = strlen(str) - 1;
    char temp; 

    while (i < r)
    {
        temp = str[i];
        str[i] = str[r];
        str[r] = temp;

        i++;
        r--;
    }
    

    printf("reversed String: %s\n", str);
    return 0;
    
}