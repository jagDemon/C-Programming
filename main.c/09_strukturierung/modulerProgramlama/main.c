#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main(int argc, char *argv[])
{
    /*
    push('A');
    push('B');
    push('C');

    while (!empty())
    {
        printf("%c\n", pop());
    }*/

    for (int i = 0; i < 30; i++) // A dan Z ye tü harfleri yazdirma...
    {
        if (!full())
        {
            push('A' + i);
        }
        else
        {
            printf("full \n");
        }
        
    }
    while (!empty())
    {
        printf("| %c |", pop());
    }

    printf("\nempty: %d\n", empty());
    printf("pop: %d\n", pop());

    return 0;
}
