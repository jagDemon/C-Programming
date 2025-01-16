#include <stdio.h>

int main(){
    // Soru 1 : Aritmetik Operatörler Ile islem yapma
    int a, b;
    printf("Iki sayi girin! a op b\n");
    scanf("%d", &a);
    scanf("%d", &b);

    printf("Toplama islemi: %d\n", a+b);
    printf("Cikarma islemi: %d\n", a-b);
    printf("Carpma islemi: %d\n", a*b);
    float kesirliSayi;
    kesirliSayi = (float) a/b;
    printf("Bolme kesirli islemi: %.4f\n", kesirliSayi);
    printf("Bolme tam sayi islemi: %d\n", a/b);
    printf("Mod islemi: %d\n", a%b);


    // Soru 2 : Increament - Decreament ile Döngü

    for (int i = 1; i <= 10 ; i++)
    {
        printf("%d ", i);
    }

printf("\n");
    for (int i = 1; i <= 10 ; ++i)
    {
        printf("%d ", i);
    }

printf("\n");
    for (int i = 10; i >= 1 ; i--)
    {
        printf("%d ", i);
    }

printf("\n");
    for (int i = 10; i >= 1 ; --i)
    {
        printf("%d ", i);
    }
printf("\n \n");


//Soru 3 : Sayi araligini kontrol etme, kullanicidan sayi iste ve bu sayinin 5-20 arasinda mi kontrol et
int x;
printf("5 ile 20 arasinda bir sayi giriniz: ");
scanf("%d", &x);

if (x >= 5 && x<=20)
{
    printf("sayi 5 ile 20 arasinda");
}else {
    printf("sayi 5 ile 20 arasinda degil");
}


// Farkli Veri Tiplerini Bellek Boyutlarini Yazdirma - int float double char
printf("\n");
printf("int: %ld\n", sizeof(int));
printf("float: %ld\n", sizeof(float));
printf("double: %ld\n", sizeof(double));
printf("char: %ld\n", sizeof(char));

int s = 0;
printf("size of s: %ld\n", sizeof(5/s));

    
//Andere Aufgabe
int o;
printf("Bir tam sayi giriniz: ");
scanf("%d", &o);

o += 5;
printf("5 ile toplama islemi: %d\n", o);

o -= 5;  // Eski haline döndür
printf("5 ile cikarma islemi: %d\n", o);

o *= o;  // Kendisiyle çarp
printf("Kendisiyle carpma islemi: %d\n", o);

o /= 2;  // 2'ye böl
printf("2'ye bolme islemi: %d\n", o);


    return 0;

}