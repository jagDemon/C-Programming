/*6. for ile Faktöriyel

Kullanıcıdan bir sayı alın ve bu sayının faktöriyelini hesaplayan bir program yazın.
*/


#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    int num;
    printf("Give me a number: ");
    scanf("%d", &num);
    int sonuc = num;

    int i;
    for (i = num; i > 1; i--)
    {
        sonuc *= i - 1;
    }
    
    printf("%d! = %d\n", num, sonuc);

    return 0;
}