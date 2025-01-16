#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Monatstage im Nicht-Schaltjahr
int monate[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
const char *wochentage[] = {"Samstag", "Sonntag", "Montag", "Dienstag", "Mittwoch", "Donnerstag", "Freitag"};

// Funktion zur Prüfung eines Schaltjahres
bool ist_schaltjahr(int jahr) {
    return (jahr % 4 == 0 && jahr % 100 != 0) || (jahr % 400 == 0);
}

// Funktion zur Validierung eines Datums
bool ist_gueltiges_datum(int tag, int monat, int jahr) {
    if (jahr < 1582 || jahr >= 5000) return false;
    if (jahr == 1582 && monat == 10 && tag < 15) return false;
    if (monat < 1 || monat > 12) return false;

    int max_tag = monate[monat - 1];
    if (monat == 2 && ist_schaltjahr(jahr)) {
        max_tag = 29;
    }

    return tag >= 1 && tag <= max_tag;
}

// Funktion zur Berechnung der Tage seit dem 1.1.1600
int berechne_tage(int tag, int monat, int jahr) {
    int tage = 0;

    // Jahre summieren
    for (int j = 1600; j < jahr; j++) {
        tage += ist_schaltjahr(j) ? 366 : 365;
    }

    // Monate des aktuellen Jahres summieren
    for (int m = 1; m < monat; m++) {
        tage += monate[m - 1];
        if (m == 2 && ist_schaltjahr(jahr)) {
            tage += 1;
        }
    }

    // Tage des aktuellen Monats hinzufügen
    tage += tag - 1;

    return tage;
}

int main() {
    char eingabe[11];
    int tag, monat, jahr;

    printf("Geben Sie ein Datum im Format tt.mm.jjjj ein: ");
    scanf("%10s", eingabe);

    // Eingabe parsen
    if (sscanf(eingabe, "%d.%d.%d", &tag, &monat, &jahr) != 3) {
        printf("Ungültiges Format! Bitte tt.mm.jjjj verwenden.\n");
        return 1;
    }

    // Datum validieren
    if (!ist_gueltiges_datum(tag, monat, jahr)) {
        printf("Ungültiges Datum!\n");
        return 1;
    }

    // Tage seit dem 1.1.1600 berechnen
    int tage_seit_1600 = berechne_tage(tag, monat, jahr);

    // Wochentag berechnen
    int wochentag_index = tage_seit_1600 % 7;
    printf("Der Wochentag ist: %s\n", wochentage[wochentag_index]);

    return 0;
}
