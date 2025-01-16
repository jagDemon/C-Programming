#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <float.h>

// 1. Dizi Elemanlarını Toplama
double sumArrayKomp(const double dizi[], int length);

double sumArrayKomp(const double dizi[], int length)
{
    double sum = 0;
    while (length > 0)
    {
        sum += dizi[--length];
    }
    return sum;
}

// 2. Çok Boyutlu Matris Girme ve Yazdırma
int readWriteMatrix(int n, int m);

int readWriteMatrix(int n, int m)
{
    int matrix[n][m];

    // Read
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; i < m; j++)
        {
            printf("matrix[%d][%d]: ", n, m);
            scanf("%d", &matrix[i][j]);
        }
    }
    // Write
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// 3. En Büyük ve En Küçük Elemanı Bulma. Bir dizideki en büyük ve en küçük elemanı bulun.
double max_min(const double dizi[], int length);

double max_min(const double dizi[], int length)
{
    double max = DBL_MIN, min = DBL_MAX;
    while (length-- > 0)
    {
        if (dizi[length] > max)
        {
            max = dizi[length];
        }
        if (dizi[length] < min)
        {
            min = dizi[length];
        }
    }
    printf("max compenent: %lf \n", max);
    printf("min commpenent: %lf \n", min);
    return 0;
}

// 4. Dizi Elemanlarını Ters Çevirme
void reversedArray(double dizi[], int length);

void reversedArray(double dizi[], int length) // swap yaptigimiz icin const double kullanmak sacma!! hata alirsin!!
{
    double temp;
    int i, j;
    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        temp = dizi[i];
        dizi[i] = dizi[j];
        dizi[j] = temp;
    }
    // diziyi yazdirma
    for (int l = 0; l < length; l++)
    {
        printf("dizi[%d] = %lf\n", l, dizi[l]);
    }
}

// 5. Dizi İçindeki Belirli Bir Elemanın Sayısını Bulma Bir dizide belirli bir elemanın kaç kez geçtiğini bulun.
int birElemanKacTane(int dizi[], int length, int sayi);

int birElemanKacTane(int dizi[], int length, int sayi)
{
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        if (sayi == dizi[i])
        {
            count++;
        }
    }
    return count;
}

// 6. Matrisin Transpozunu Alma
void matrisTranspoz(int satir, int sutun, int matrix[satir][sutun], int transpoz[sutun][satir]);

void matrisTranspoz(int satir, int sutun, int matrix[satir][sutun], int transpoz[sutun][satir])
{
    for (int i = 0; i < satir; i++)
    {
        for (int j = 0; j < sutun; j++)
        {
            transpoz[j][i] = matrix[i][j];
        }
    }
}

// 7. Bir Dizi Elemanlarını Pointer Kullanarak Yazdırma
//?
void printArrayWithPointer(const int *arr, int length);

void printArrayWithPointer(const int *arr, int length)
{
    const int *ptr = arr; // dizinin baslangic adresini isaret eden pointer
    for (int i = 0; i < length; i++)
    {
        printf("arr[%d] = %d\n", i, *(ptr + 1)); // pointer aritmetigi icin erisim
    }
}

/*8. İki Boyutlu Diziyi Pointer ile Yazdırmaç Bir matrisin tüm elemanlarını pointer kullanarak ekrana yazdırın.*/
void printMatrixWithPointer(int satir, int sutun, const int *matrix);
void printMatrixWithPointer(int satir, int sutun, const int *matrix)
{
    const int *ptr = matrix; // matrixin baslangic adresini isaret eden pointer
    for (int i = 0; i < satir; i++)
    {
        for (int j = 0; j < sutun; i++)
        {
            printf("matrix[$d][$d] = $d\n", i, j, *(ptr + i * sutun + j));
        }
    }
}

// 9. Çok Boyutlu Dizide Belirli Bir Elemanı Arama. Bir matris içinde kullanıcıdan alınan bir değeri arayın ve bulunduğu yeri yazdırın.
void search(int satir, int sutun, int matrix[satir][sutun], int deger);

void search(int satir, int sutun, int matrix[satir][sutun], int deger)
{
    for (int i = 0; i < satir; i++)
    {
        for (int j = 0; j < sutun; j++)
        {
            if (deger == matrix[i][j])
            {
                printf("Bulundu. degerin bulundugu yer: matrix[%d][%d]", i, j);
                return; // Değer bulunduğu an döngüyü durdur
            }
        }
    }
    printf("Deger matrisin icinde bulunamadi.\n");
}

/*10. Dinamik Boyutlu Matris Girme
Kullanıcıdan matris boyutlarını alın ve dinamik bir matris oluşturup elemanlarını ekrana yazdırın.*/
void dinamik(int satir, int sutun, int **matrix);

void dinamik(int satir, int sutun, int **matrix)
{
    matrix = (int **)malloc(satir * sizeof(int *));

    // dinamik matrix icin yer ayirma
    for (int i = 0; i < satir; i++)
    {
        matrix[i] = (int *)malloc(sutun * sizeof(int));
    }

    // matrix elemanlirini alma
    printf("Matrix elemanlarini gir:\n");
    for (int i = 0; i < satir; i++)
    {
        for (int j = 0; i < sutun; j++)
        {
            printf("Matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Elemanlari yazdirma
    for (int i = 0; i < satir; i++)
    {
        for (int j = 0; i < sutun; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // SERBEST BIRAK!!!
    for (int i = 0; i < satir; i++)
    {
        free(matrix[i]);
    }
    free(matrix);
}

int main()
{

    return 0;
}
