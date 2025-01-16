#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

//Kullanicidan bosluklarla ayrilmis bir cümle alin. Cümledeki en uzun kelimeyi bulan bir program yazin.

int main(){

    char str[256];
    char longestString[256] = ""; // En uzun kelimeyi tutacak variable
    char *word; // Kelimeyi tutacak isaretci.


    printf("Bir cumle girin: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0'; // strcspn -> secilen karakteri kaldirma. sondaki \n karakterini kaldirdik.

    //Ilk kelimeyi alma
    word = strtok(str, " "); //ilk bosluga kadar olan kisimi kestik.

    while (word != NULL)
    {
        if (strlen(word) > strlen(longestString)) // eger mevcut kelimenin uzunlugu, suanki en uzun kelimeden uzunsa
        { 
            strcpy(longestString, word); // en uzun kelime güncellendi.
        }

        word = strtok(NULL, " "); //sonraki kelimeye gectik.
        
    }
    
    printf("En uzun kelime: %s\n", longestString);

    return 0;
}