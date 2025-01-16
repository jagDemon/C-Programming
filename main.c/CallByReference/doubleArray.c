#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
/*
Diziler, C'de varsayılan olarak adres ile 
fonksiyonlara geçirilir. Bu nedenle, diziler 
üzerinde yapılan değişiklikler doğrudan orijinal 
diziye yansır*/
void doubleArray(int arr[], int size);

void doubleArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        arr[i] *= 2;
    }
}

int main()
{
    int nums[] = {1, 2, 3, 4, 5};
    int size = sizeof(nums) / sizeof(nums[0]);

    printf("Orijinal dizi: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", nums[i]);
    }

    doubleArray(nums, size);

        printf("\nGuncellenmis dizi: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", nums[i]);
    }

    return 0;
}
