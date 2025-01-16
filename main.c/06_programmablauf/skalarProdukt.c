/* SkalarProdukt berechnen. 
a ve b vektörü. a o b = a1*b1 + a2*b2 + ...  */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define N  5

int main(){
    double v[N], w[N], prod;
    int i;

    printf("Enter first vector\n"); // N elemanli array
    for (i = 0; i < N; i++)
    {
        scanf("%lf", &v[i]);
    }

    printf("Enter second vector\n");
    for (i = 0; i < N; i++)
    {
        scanf("%lf", &w[i]);
    }

    //compute scalar product
    prod = 0;
    for (i = 0; i < N; i++)
    {
        prod = prod + v[i] * w[i];
    }

    printf("Scalar product: %lf\n", prod);

    return 0;
    
    
    
}
