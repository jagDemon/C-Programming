#include <stdio.h>

int main(){
    


    for (int i = 1; i <= 1; i++)
    {
        printf("%d \n",i );
    }

    for(int i=2; i<=20;)
    {
        printf("%d \n", i);
        i = i*2;

    }

    //1 den 50 ye kadar olan cift sayilari yazdirma
    printf("Cift sayilar \n");  
    for (int i = 1; i <= 50; i++)  // veya for(int i = 0; i<=50; i+=2)
    {
        if (i%2==0)
        {
            printf("%d, ", i);
        }        
    }

    //3. 1'den 100'e kadar olan sayıların toplamını hesapla
    int y = 0;
    printf("\n 1 de 100 e kadar olan sayilarin toplami=");
    for (int i = 1; i <= 100; i++) //baslangic degeri 1 olarak düzeltildi.
    {
        y += i; 
    }
    printf("%d", y);

    //4. 1 ile 10 arasındaki sayılardan her birinin karesini yazdır
    int z = 0;
    for (int i = 1; i <= 10; i++)
    {
        z = i*i; // ya da 
        //printf("\n%d^2 = %d", i, i * i); 
        //bu sekilde z variable ini kullanmadan direk ciktisini almis olduk.
        printf("\n %d^2 = %d",i, z);
    }

    //5. Faktöriyel Hesaplama
    int faktoriel;
    printf("\n Bir sayi giriniz:");
    scanf("%d", &faktoriel);
    int b = 1;
    if (faktoriel<0)
    {
        printf("Faktoriyel negatif olamaz");
    }else{
        for (int i = 1; i <= faktoriel; i++)
        {
            b *= i;
        }
    printf("%d'nin faktoriyeli: %d",faktoriel, b);
    }

    //6. Aritmatik Dizi Hesaplama
    int a,d,n;
    // Kullanıcıdan gerekli bilgileri al
    printf("\n Ilk terimi giriniz (a): ");
    scanf("%d", &a);

    printf("Ortak farki giriniz (d): ");
    scanf("%d", &d);

    printf("Terim sayisini giriniz (n): ");
    scanf("%d", &n);

    printf("Aritmetik dizi: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d", a+(i*d)); // Formül: a_n = a + i*d
        if (i < n-1)
        {
            printf(", ");
        }
        
    }printf("\n");

    //7. 1'den 50'ye kadar olan sayıların asal olup olmadığını kontrol et
    for (int i = 0; i <= 50; i++)
    {
        if (i==2 || i == 3 || i == 5 || i==7)
        {
            printf("%d, ", i);
        }
        
        if (i>10)
        {
            if (i%3 != 0 && i%5 != 0 && i%7 != 0)
            {
                printf("%d, ", i);
            }
        }
    }

    //8. Üçgen Deseni Yazdır
    int satir;
    printf("Kac satir?");
    scanf("%d",&satir);
    for (char i = 1 ; i <= satir; i++)
    {
        for (int j = 1; j <= satir - i; j++) {  // Boşlukları bas
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    
    

    return 0;
}

 