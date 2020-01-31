/*Hauptprogramm fragt Absatzmenge und Preis eines Produkts vom Benutzer ab. 
Preis und Absatzmenge werden in Unterprogramm übergeben, das den Umsatz berechnet und ausgibt*/

#include <stdio.h>

void umsatzBerechnen(double preis, double absatzmenge){
    double umsatz=0;
    umsatz=preis*absatzmenge;
    printf("Umsatz = %.2lf",umsatz);
}

int main(void){
    double eingabgePreis=0;
    double eingabeAbsatzmenge=0;
    printf("Bitte Preis eingeben\n");
    scanf("%lf",&eingabgePreis);
    printf("Bitte Absatzmenge eingeben\n");
    scanf("%lf",&eingabeAbsatzmenge);

    umsatzBerechnen(eingabgePreis, eingabeAbsatzmenge);
}
