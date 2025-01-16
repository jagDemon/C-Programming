/*4. while ile Basamak Toplamı

Kullanıcıdan bir sayı alın ve bu sayının basamaklarının toplamını hesaplayan bir program yazın.*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    int num;
    printf("Give me a number: ");
    scanf("%d", &num);
    int sum = 0;

    if(num < 0){
        num = -num;
    }

    while (num > 0)
    {
        sum += num%10;
        num = num / 10;
    }
    
    printf("Quersumme is: %d\n", sum);
    return 0;
}