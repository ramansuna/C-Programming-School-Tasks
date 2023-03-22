#include <stdio.h>
#include <math.h>

int main() {

// Auswahl der Getraenke
float rueckgeld;
int sorte;
printf("Waehlen sie ihr Getraenk aus:\n\n");
printf("1) Wasser.......... 0.50 fr.\n");
printf("2) Limonade........ 1.00 fr.\n");
printf("3) Bier............ 2.00 fr.\n\n");
printf("Geben sie 1, 2 oder 3 ein: ");
scanf("%d", &sorte);

// lege den zu zahlenden Betrag fest
float preis=0;
switch(sorte) {
    case 1: preis = 0.5; break;
    case 2: preis = 1.0; break;
    case 3: preis = 2.0; break;
}

// Mengeneingabe
int menge=1;
printf("\nGeben sie die gewuenschte Menge ein: ");
scanf("%d", &menge);

// Bezahlvorgang
printf("\n--- Bezahlvorgang ---\n");
float einwurf;
float zuBezahlen = preis * menge;
do {
	printf("\nSie muessen %.2f einwerfen.", zuBezahlen);
	printf("\nBitte werfen Sie den Betrag ein: ");
	scanf("%f", &einwurf);
    rueckgeld = einwurf - zuBezahlen;
    printf("Ihr Rueckgeld betraegt: %.2f", rueckgeld);
	
}

if(rueckgeld < zuBezahlen) {

    


}

printf("\n\nVielen Dank, bitte entnehmen sie ihre Getraenke.\n");

return 0;

}