#include "methods.h"

// Summe der Kompenenten eines Vektors berechnen.
double vektor_sum(const double v[], int length)
{
    double sum = 0;
    while (--length >= 0)
    {
        sum += v[length];
    }
    return sum;
}

double vektor_sum2(int length, double v[length])
{
    double sum = 0;
    while (--length >= 0)
    {
        sum += v[length];
    }
    return sum;
}