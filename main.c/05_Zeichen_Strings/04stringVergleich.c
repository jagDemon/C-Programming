/*4. String Karşılaştırma

Kullanıcıdan iki string alın ve:

    Eğer aynıysalar "Stringler eşit."
    Farklıysalar "Stringler farklı." yazdırın.*/

    #include <stdio.h>
    #include <ctype.h>
    #include <string.h>
    #define N 35

    int main(){
        char str[N];
        char str1[N];
        printf("ilk stringi giriniz: \n");
        scanf("%s", str);
        printf("ikinci stringi giriniz: \n");
        scanf("%s", str1);

        int ergebnis = strcmp(str,str1);
        
        /*
        if (strlen(str) == 0 || strlen(str1) == 0) {
              printf("Stringler bos olamaz!\n");
        }
        */
        if (ergebnis == 0)
        {
            printf("Stringler esit");
        }
        else{
            printf("Stringler farkli"); 
        }
        
        
        return 0;
    }