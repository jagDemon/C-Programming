#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 0; i < argc; i++)
    {
        printf("%s\n",argv[i]);
    }

    for (int i = 0; argv[i] != NULL; i++)
    {
        printf("%s\n",argv[i]);
    }
    
    
    return 0;
}
