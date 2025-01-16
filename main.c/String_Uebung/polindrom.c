#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define N 35

void reversedStr(const char *str, char *reversed)
{
    int length = strlen(str);
    for (int i = 0; i < length; i++)
    {
        reversed[i] = str[length - i - 1];
    }

    reversed[length] = '\0';
}

int main()
{

    printf("Geben sie einen String.\n");
    char str[N];
    scanf("%34s", str);

    char reversed[N];
    reversedStr(str, reversed);

    if (strcmp(str, reversed) == 0)
    {
        printf("das ist ein Polindrom\n");
    }
    else
        printf("kein Polindrom");

    return 0;
}