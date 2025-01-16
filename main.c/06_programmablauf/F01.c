/*1. if-else Yapısı

Kullanıcıdan bir sayı alın ve:

    Pozitif mi?
    Negatif mi?
    Sıfır mı?
    kontrol eden bir program yazın.*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    int num; 
    printf("Give me a number: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("This number is positive.");
    }else if (num < 0)
    {
        printf("This number is negative.");
    }else{
        printf("This number is null. %d", num);
    }
    
    return 0;
}