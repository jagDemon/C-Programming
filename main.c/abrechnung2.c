#include <stdio.h>

void showMenu() {
    printf("\n--- Mini Abrechnung Uygulaması ---\n");
    printf("1. Abrechnung Hesaplama\n");
    printf("2. Çıkış\n");
    printf("----------------------------------\n");
    printf("Seçiminiz: ");
}

int main() {
    int choice;
    double kassenbestand, kassiert, gutscheinverkauf;
    double ec, einlGutschein, auslagen, einlagen, tgvom, gesamt, bankEin;
    int tg;

    do {
        showMenu();
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            // Girdi alma
            printf("Kassenbestand Vortrag: ");
            scanf("%lf", &kassenbestand);

            printf("Kassiert: ");
            scanf("%lf", &kassiert);

            printf("Gutscheinverkauf: ");
            scanf("%lf", &gutscheinverkauf);

            printf("EC (Kart ödemeleri): ");
            scanf("%lf", &ec);

            printf("Eingeloester Gutschein (Kullanılan hediye çeki): ");
            scanf("%lf", &einlGutschein);

            printf("Auslagen (Giderler): ");
            scanf("%lf", &auslagen);

            printf("Einlagen (Eklemeler, depozito vb.): ");
            scanf("%lf", &einlagen);

            // Toplam hesaplama
            gesamt = kassenbestand + kassiert + gutscheinverkauf - ec - einlGutschein - auslagen + einlagen;

            // TG sorusu
            printf("Abzgl TG vom: \n1 - Ja\n2 - Nein\n");
            scanf("%d", &tg);

            if (tg == 1) {
                printf("TG vom: ");
                scanf("%lf", &tgvom);

                // Banka yatırımı ve kasa hesaplamaları
                bankEin = gesamt - 250 - tgvom;
            } else {
                bankEin = gesamt - 250;
            }

            printf("\n*** Abrechnung Sonuç ***\n");
            printf("Gesamt: %.2lf \n", gesamt);
            printf("Bankeinzahlung: %.2lf \n", bankEin);
            printf("Kassenbestand (Gün sonu): %.2lf \n", gesamt - bankEin);
            break;

        case 2:
            printf("Uygulamadan çıkılıyor...\n");
            break;

        default:
            printf("Geçersiz seçim. Lütfen tekrar deneyin.\n");
        }
    } while (choice != 2);

    return 0;
}
