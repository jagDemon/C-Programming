#include <stdio.h>

int main(){
    // char -> bir karakterin ASCII deki sayisal degeri
    char a = 'w'; // tek bir char karakteri
    printf("Char degeri a = %c \n", a);

    // String -> karakterlerden olusan bir dizi
    // String ler * null-terminator (\0) * ile sona erer. 

    // Stringler bir char dizisi olarak saklanir.
    char text[5] = "Text"; // son karakter \0 icin yer ayrilir.
    // yani son deger hesaplanarak dizi boyutu hesaplanir. 
    // Örneğin, "Text" 4 harf + 1 null-terminator = 5 karakter

    /* string boyutunu asmamak icin kontrol.
    int i = 0;
    while ((target[i] = source[i]) != '\0'){
        i++;
    } 
    */

   /*int c; 
   while ((c=getchar()) != EOF)
   {
    putchar(c);
   }*/
   char str[30];
   scanf("%s", str);
   printf(" bu string; %s", str);



    
    return 0;
}