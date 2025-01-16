#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    double kassenbestand, kassiert, gutscheinverkauf,
        ec, einlGutschein, auslagen, einlagen, tgvom;

    int tg;

    printf("Kassenbestand Vortrag: \n");
    scanf("%lf", &kassenbestand);

    printf("Kassiert: \n");
    scanf("%lf", &kassiert);

    printf("Gutscheinverkauf: \n");
    scanf("%lf", &gutscheinverkauf);

    printf("EC: \n");
    scanf("%lf", &ec);

    printf("Eingeloester Gutschein: \n");
    scanf("%lf", &einlGutschein);

    printf("Auslagen: \n");
    scanf("%lf", &auslagen);

    printf("Einlagen: \n");
    scanf("%lf", &einlagen);

    double gesamt = (kassenbestand) + (kassiert) + (gutscheinverkauf) - (ec) - (einlGutschein) - (auslagen) + (einlagen);

    printf("Abzgl TG vom: \n1-ja\n2-nein\n");
    scanf("%d", &tg);
    if (tg == 1)
    {
        printf("TG vom .. = \n");
        scanf("%lf", &tgvom);
        double bankEin = gesamt - 250 - tgvom;
        printf("Gesamt: %lf \n", gesamt);
        printf("Bankeinzahlung = %lf\n", bankEin);
        printf("Kassenbestand = %lf\n", (gesamt - bankEin));
    }
    else
    {
        double bankEin = gesamt - 250;
        printf("Gesamt: %lf \n", gesamt);
        printf("Bankeinzahlung = %lf\n", bankEin);
        printf("Kassenbestand = %lf\n", (gesamt - bankEin));
    }

    return 0;
}