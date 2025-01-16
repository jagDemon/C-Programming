#include <stdio.h>

int main()
{
    printf("Schreib hier ein Zahl\n");
    int a;
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        printf("%d- <3 ICH LIEBE DICH\n", i+1);
    }
    printf("JETZT KUSS MICH!!!!!!\n");
    
    return 0;
}
